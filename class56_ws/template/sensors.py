''' ####################
EN605.613 - Introduction to Robotics
Assignment 6
Extended Kalman Filter
-------
For this assignment you must implement the LandmarkDetector class and the EKF function.

Use the definition of the landmark sensor given in Lecture 7.

==================================
Copyright 2020,
The Johns Hopkins University Applied Physics Laboratory LLC (JHU/APL).
All Rights Reserved.

#################### '''

import sys
import numpy as np
import scipy.linalg as la
import control
from numpy import dot
import math

class LandmarkDetector(object):
  """
  Landmark sensor for the differential drive system.
  """

  def __init__(self,landmark_list):
    """
    Computes sensor measurements for a landmark sensor.

    Input
      :param landmark_list: a 2d list of landmarks [L1,L2,L3,...,LN], where each row is a 2D landmark defined by Li =[l_i_x,l_i_y]

    """

    self.landmarks = np.array(landmark_list)
    self.N_landmarks = self.landmarks.shape[0]
    self.W = None

  def get_W(self):
    '''
    This function provides the covariance matrix W which describes the noise that can be applied to the measurements.

    Feel free to experiment with different levels of noise.
    
      Output
        :return: V: input cost matrix
    '''
    if self.W is None:
      self.W = 0.0095*np.eye(2*self.N_landmarks)
    return self.W


  def measure(self,x,w=None):
    """
    Computes the measurement for the system. This will be a list of range and relative angles for each landmark.

    Input
      :param x: The state [x,y,theta,speed] of the system -> np.array with shape (3,)
      :param w: The noise (assumed Gaussian) applied to the measurment  -> np.array with shape (N_Landmarks,)

    Output
      :return: y: The resulting measurement (2xN array). y = [h1,h2,h3...,hN] where hi=[range_i,angle_i]    
      this is wrong.. y is supposed to have shape 2*N_landmarks, we are supposed to flatten in here
    """

    y = np.empty(2*self.N_landmarks)
    #25 points: Implement this funciton
    for i in range(0, 2*self.N_landmarks, 2) :
        l = self.landmarks[int(i/2)]
        range_i = np.sqrt((x[0]-l[0])**2 + (x[1]-l[1])**2)
        angle_i = math.atan2(x[1]-l[1], x[0]-l[0]) - x[2]
        #flatten y based on what was said in class
        y[i] = range_i
        y[i+1] = angle_i
        
    #check if there is a w
    if w is None :
        w = self.get_W()
    #add noise
    y = y + w

    return y

  def jacobian(self,x):
    """
    Computes the first order jacobian around the state x

    Input
      :param x: The starting state (position) of the system -> np.array with shape (3,)

    Output
      :return: H: The resulting Jacobian matrix H for the sensor
      this is also wrong, apparently the shape of H is supposed to be 2*N_landmarks by 3, so flatten it  
    """

    #25 points: Implement this funciton

    #H = [[dh1/x1, dh1/x2, dh1/x3], [dh2/x1, dh2/x2, dh3/x3]]
    #h1 = sqrt((x1-lx)^2 + (x2-ly)^2)
    #h2 = arctan(x2-ly/x1-lx) - x3
    #return an array of H matrices for each landmark. I will try the latter but perhaps come back to this later.
    #but flatten the array so that each matrix is two rows stacked on top of eachother. 
    H = np.empty(2*self.N_landmarks, dtype=object)

    for i in range(0, 2*self.N_landmarks,2) :
        l = self.landmarks[int(i/2)]
        top_row = np.array([(x[0] - l[0]) / np.sqrt((x[1] - l[1])**2 + (x[1] - l[1])**2), (x[1] - l[1]) / np.sqrt((x[0] - l[0])**2 + (x[1] - l[1])**2), 0])
        bottom_row = np.array([-(x[1]-l[1])/((1 + ((x[1] - l[1])/(x[0] - l[0]))**2)*((x[0] - l[0])**2)), 1/((1 + ((x[1] - l[1])/(x[0] - l[0]))**2)*(x[0]-l[0])), -1])
        H[i] = top_row
        H[i+1] = bottom_row
    #format the array properly so its shape is 2_Nlandmarks x 3
    H = np.vstack(H)
    return H

def EKF(DiffDrive,Sensor,y,x_hat,sigma,u,dt,V=None,W=None):
    """
    Computes the first order jacobian around the state x.


    Some of these matrixes will be non-square or singular. Utilize the pseudo-inverse function
    la.pinv instead of inv to avoid these errors.

    Input
      :param DiffDrive: The DifferentialDrive object defined in kinematics.py
      :param Sensor: The Landmark Sensor object defined in this class
      :param y: The measurement made at time t -> np.array with shape (N_Landmarks,)
      this is wrong, it should have shape (2*NLandmarks, )
      :param x_hat: The starting estimate of the state at time t -> np.array with shape (3,)
      :param sigma: The state covariance matrix at time t -> np.array with shape (3,3)
      :param u: The input to the system at time t -> np.array with shape (2,)
      :param V: The state noise covariance matrix  -> np.array with shape (3,3)
      :param W: The measurment noise covariance matrix -> np.array with shape (N_Landmarks,N_Landmarks)

      :param dt: timestep size delta t

    Output
      :return: x_hat_2: The estimate of th state at time t+1
      this should also output the new sigma 
    """

    #50 points: Implement this funciton
    #this only works when I move the landmarks to be far away
    #the first sigma this function recieves is the wrong shape, so just redo this if that is the case
    if sigma.dtype is not np.dtype('object') : #this means its (3,)
        sigma = np.array([[.1, .1, .1],[.1, .1, .1],[.1, .1, .1]])
    
    #if V and W are none we need to retrieve them
    if V is None  :
        V = DiffDrive.get_V()
    if W is None :
        W = Sensor.get_W()


    #prediction
    forward_x = DiffDrive.forward(x_hat, u, [0,0,0], dt)
    A, B = DiffDrive.linearize(x_hat, u, dt)
    new_sigma = A @ sigma @ A.T + V
    
    #correction
    H = Sensor.jacobian(forward_x)
    dy = y - Sensor.measure(forward_x, 0)

    #The sigma that is input is not actually 3x3, it is 3x1...
    #This is intialize to .1*np.ones(3) in lqr_ekf_control. We aren't supposed to change that so I just made
    #a new sigma at the beginning of this function which fixed my shape issues with S
    S = H @ new_sigma @ H.T + W
    R = new_sigma @ H.T @ la.pinv(S)
    #R = sigma @ la.pinv(H) @ la.pinv(S) this is from the slides but the above is from class
    corrected_x = forward_x + (R @ dy)
    corrected_sigma = new_sigma - R @ H @ new_sigma
  
    return corrected_x, corrected_sigma

    
