''' ####################
EN605.613 - Introduction to Robotics
Assignment 5
Linear Quadratice Regulator
-------
For this assignment you must implement the DifferentialDrive class, get_R, get_Q, and dLQR function.

Use the vehicle kinematics defined in Lecture 3. 

==================================
Copyright 2020,
The Johns Hopkins University Applied Physics Laboratory LLC (JHU/APL).
All Rights Reserved.

#################### '''

import sys
import numpy as np
import scipy.linalg as la
import control

class DifferentialDrive(object):
  """
  Implementation of Differential Drive kinematics.
  This represents a two-wheeled vehicle defined by the following states
  state = [x,y,theta]
  and accepts the following control inputs
  input = [left_wheel_rotation_rate,right_wheel_rotation_rate]

  """
  def __init__(self,L=1,R=1):
    """
    Initializes the class
    Input
      :param L: The distance between the wheels
      :param R: The radius of the wheels
    """

    self.L = L
    self.R = R
    self.u_limit = 1 / R
    self.V = None
  def get_state_size(self):
    return 3

  def get_input_size(self):
    return 2

  def get_V(self):
    '''
    This function provides the covariance matrix V which describes the noise that can be applied to the forward kinematics.
    
    Feel free to experiment with different levels of noise.

      Output
        :return: V: input cost matrix
    '''
    if self.V is None:
        self.V = np.eye(3)
        self.V[0,0] = 0
        self.V[1,1] = 0
        self.V[2,2] = 0.075
    return self.V

  def forward(self,x,u,v,dt):
    """
    Computes the forward kinematics for the system.

    Input
      :param x: The starting state (position) of the system (units:[m,m,rad]) -> np.array with shape (3,)
      :param u: The control input to the system (e.g. wheel rotation rates) (units: [rad/s,rad/s]) -> np.array with shape (2,)
      :param v: The noise applied to the system (units:[m/s, m/s, rad/s^2]) -> np.array with shape (3,)
      :param dt: I think this is for the time... but he didn't say, so hopefully it is in seconds.
    Output
      :return: x1: The new state of the system

    """
    
    #20 points: Implement this funciton
    # this should be x_t = x + (dx/dt + v) * dt, I *think* dx/dt refers to the velocity vector or dotx from slides
    #calculate the velocity vector 
    x_vel = (self.R/2.0) * (u[0] + u[1]) * np.cos(x[2])
    y_vel = (self.R/2.0) * (u[0] + u[1]) * np.sin(x[2])
    theta_vel = (self.R / self.L) * (u[1] - u[0])

    #add in noise and dt
    new_x = x[0] + ((x_vel + v[0]) * dt)
    new_y = x[1] + ((y_vel + v[1]) * dt)
    new_theta = x[2] + ((theta_vel + v[2]) * dt)
    
    result = np.array([new_x, new_y, new_theta])

    return result

  def linearize(self,x,u,dt):
    """
    Computes the first order jacobian for A and B around the state x and input u

    Input
      :param x: The state of the system  -> np.array with shape (3,)
      :param u: The control input to the system (e.g. wheel rotation rates) -> np.array with shape (2,)

    Output
      :return: A: The Jacobian of the kinematics with respect to x 
      :return: B: The Jacobian of the kinematics with respect to u

    """

    #20 points: Implement this funciton
    #For reference what is f1, f2, f3??:
    #f1 = x[0] + ((self.R/2.0) * (u[0] + u[1]) * cos(x[2]) + v) * dt
    #f2 = x[1] + ((self.R/2.0) * (u[0] + u[1]) * sin(x[2]) + v) * dt
    #f3 = x[2] + ((self.R / self.L) * (u[0] - u[1]) + v)*dt

    constant = (self.R / 2.0)
    #A = [[df1/x1, df1/x2, df1/x3], [df2/x1, df2/x2, df2/x3], [df3/1, df3/x2, df3/x3]]
    #should this have the extra colum of 0, 0, 1 at the end?
    A = np.array([[1, 0, -constant * (u[0] + u[1]) * np.sin(x[2]) * dt],
                [0, 1, constant * (u[0] + u[1]) * np.cos(x[2]) * dt], 
                [0, 0, 1]])
    
    #Jacobian of these kinematics with respect to u - multiply it out before taking derivative
    #f1 = x[0] + (constant*u[0]*cos(x[2])*dt + constant*u[1]*cos(x[2])*dt)
    #f2 = x[1] + (constant*u[0]*sin(x[2])*dt + constant*u[1]*sin(x[2])*dt)
    #f3 = x[2] + (self.R/self.L)*u[1]*dt - (self.R/self.L)*u[0]*dt)
    #B = [[df1/u1, df1/u2], [df2/u1, df2/u2], [df3/u1, df3/u2]]
    #if these fs are the forward kinematics there shouldnt be any change. 

    B = np.array([[constant * np.cos(x[2]) * dt, constant * np.cos(x[2]) * dt], 
        [constant * np.sin(x[2]) * dt, constant * np.sin(x[2]) * dt], 
        [-(self.R/self.L) * dt, (self.R/self.L) * dt]])

    return A,B

def dLQR(F,Q,R,x,xf,dt):
    '''
    discrete-time linear quadratic regulator for a non-linear system.

    Compute the optimal control given a nonlinear system, cost matrices, a current state, and a final state.

    Solve for P using the dynamic programming method.

    Assume that Qf = Q

    If you are encountering errors with the inverse function you may use the pseudoinverse instead.
    Hint: Making additional helper functions may be useful

      Input
        :param F: The dynamics class object (has forward and linearize functions implemented)
        :param Q: The cost-to-go matrix Q -> np.array with shape (3,3)
        :param R: The input cost matrix R -> np.array with shape (2,2)
        :param x: The current state of the system x -> np.array with shape (3,)
        :param xf: The desired state of the system xf -> np.array with shape (3,)
        :param dt: The size of the timestep -> float

      Output
        :return: u: Optimal action u for the current state
        
    '''
    #50 points: Implement this funciton
    
    #mine reaches the goal without dynamic programming so I am just doing the one shot
    #dynamic programming would be better but isn't necessary
    #set N to be whatever we want
    N = 20
    
    #first we will intialize all our arrays to the same size, filling in known values. 
    #not all of them will have a final value
    P = np.empty(N+1, dtype=object)
    P[N] = Q
    A = np.empty(N+1, dtype=object)
    B = np.empty(N+1, dtype=object)
    #we will assume the final and starting u = [0,0] and linearize our A and B
    A[N], B[N] = F.linearize(xf, np.array([0,0]), dt)
    A[0], B[0] = F.linearize(x, np.array([0,0]), dt)
    K = np.empty(N+1, dtype=object)
    X = np.empty(N+1, dtype=object)
    X[0] = x
    X[N] = xf
    U = np.empty(N+1, dtype=object)
    U[N] = np.array([0,0])
    
    #first fill in P. we are not updating A and B but should be
    for i in range(N, 0, -1) :
        #the a, b and p values we use
        a = A[0] #ideally we want this to be A[i] but im not sure how to calculate it
        b = B[0] #ideally we want this to be B[i]
        p = P[i]
        
        P[i - 1] = Q + (a.T @ p @ a) - (a.T @ p @ b) @ la.inv(R + b.T @ p @ b) @ b.T @ p @ a
   

    for i in range(N) :
        #the a, b, and p values we use

        if A[i] is None :
            a = A[0] 
            b = B[0]
        else :
            a = A[i]
            b = B[i]

        p = P[i + 1]
        
        K[i] = -np.linalg.inv(R + b.T @ p @ b) @ b.T @ p @ a
        U[i] = K[i] @ (X[i] - X[N])
        #increment X
        X[i + 1] = F.forward(X[i], U[i], [0, 0, 0], dt)
        
        #increment A and B? using a placeholder for u
        A[i + 1], B[i + 1] = F.linearize(X[i + 1], U[i], dt)

    #in office hours he said to return the first U value
    return U[0]

def get_R():
    '''
    This function provides the R matrix to the lqr_steer_control and lqr_ekf_control simulators.
    
    Returnss the input cost matrix R.

    Experiment with different gains to see their effect on the vehicle's behavior.

      Output
        :return: R: input cost matrix
    '''
    #5 points: Implement this function
    R = np.array([[.1, 0], [0, .1]])
    #R = np.eye(2)
    return R

def get_Q():
    '''
    This function provides the Q matrix to the lqr_steer_control and lqr_ekf_control simulators.
    
    Returns the input cost matrix R.

    Experiment with different gains to see their effect on the vehicle's behavior.

      Output
        :return: Q: State cost matrix
    '''
    #5 points: Implement this funciton 3x3 matrix - we will need tune these to get the best behavior
    Q = np.array([[5, 0, 0], [0, 5, 0], [0, 0, 5]])
    #Q = np.eye(3)
    return Q
