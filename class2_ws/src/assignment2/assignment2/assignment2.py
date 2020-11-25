
''' ####################
    EN605.613 - Introduction to Robotics
    Assignment 2
    Coordinate Transforms

    Lauren Courtney - lcourtn5
    September 2020
    -------
    For this assignment you must implement the all the functions in this file
    ==================================
    Copyright 2020,
    The Johns Hopkins University Applied Physics Laboratory LLC (JHU/APL).
    All Rights Reserved.
    #################### '''


import numpy as np


def euler_rotation_matrix(alpha,beta,gamma):
    """
    Creates a 3x3 rotation matrix in 3D space from euler angles

    Input
    :param alpha: The roll angle (radians)
    :param beta: The pitch angle (radians)
    :param gamma: The yaw angle (radians)

    Output
    :return: A 3x3 element matix containing the rotation matrix

    """
    roll_matrix = np.matrix([
        [1,0,0], 
        [0, np.cos(alpha), -np.sin(alpha)],
        [0, np.sin(alpha), np.cos(alpha)]
        ])
    pitch_matrix = np.matrix([
        [np.cos(beta), 0, np.sin(beta)],
        [0, 1, 0],
        [-np.sin(beta), 0, np.cos(beta)]
        ])
    yaw_matrix = np.matrix([
        [np.cos(gamma), -np.sin(gamma), 0],
        [np.sin(gamma), np.cos(gamma), 0],
        [0, 0, 1]
        ])

    rotation_matrix = yaw_matrix * pitch_matrix * roll_matrix

    return rotation_matrix


def quaternion_rotation_matrix(Q):
    """
    Creates a 3x3 rotation matrix in 3D space from a quaternion.

    Input
    :param q: A 4 element array containing the quaternion (q0,q1,q2,q3) 

    Output
    :return: A 3x3 element matix containing the rotation matrix

    """
    rotation_matrix = np.matrix([
        [(2*(Q[0]*Q[0] + Q[1]*Q[1]) - 1), 2*(Q[1]*Q[2] - Q[0]*Q[3]), 2*(Q[1]*Q[3] + Q[0]*Q[2])],
        [2*(Q[1]*Q[2] + Q[0]*Q[3]), (2*(Q[0]*Q[0] + Q[2]*Q[2]) - 1), 2*(Q[2]*Q[3] - Q[0]*Q[1])],
        [2*(Q[1]*Q[3] - Q[0]*Q[2]), 2*(Q[2]*Q[3] + Q[0]*Q[1]), (2*(Q[0]*Q[0] + Q[3]*Q[3]) - 1)]
        ])

    return rotation_matrix

def quaternion_multiply(Q0,Q1):
    """
    Multiplies two quaternions.

    Input
    :param Q0: A 4 element array containing the first quaternion (q01,q11,q21,q31) 
    :param Q1: A 4 element array containing the second quaternion (q02,q12,q22,q32) 

    Output
    :return: A 4 element array containing the final quaternion (q03,q13,q23,q33) 

    """
    Z0 = Q0[0]*Q1[0] - Q0[1]*Q1[1] - Q0[2]*Q1[2] - Q0[3]*Q1[3]
    Z1 = Q0[0]*Q1[1] + Q0[1]*Q1[0] + Q0[2]*Q1[3] - Q0[3]*Q1[2]
    Z2 = Q0[0]*Q1[2] + Q0[2]*Q1[0] + Q0[3]*Q1[1] - Q0[1]*Q1[3]
    Z3 = Q0[0]*Q1[3] + Q0[3]*Q1[0] + Q0[1]*Q1[2] - Q0[2]*Q1[1]

    Z = [Z0, Z1, Z2, Z3]

    return Z

def rotate(p1,alpha,beta,gamma):
    """
    Rotates a point p1 in 3D space to a new coordinate system.

    Input
    :param p1: A 3 element array containing the original (x1,y2,z1) position]
    :param alpha: The roll angle (radians)
    :param beta: The pitch angle (radians)
    :param gamma: The yaw angle (radians)

    Output
    :return: A 3 element array containing the new rotated position (x2,y2,z2)

    """
    p = np.array(p1)
    rot_matrix = euler_rotation_matrix(alpha, beta, gamma)
    new = rot_matrix.dot(p)
    return new.tolist()[0]

def inverse_rotation(p2,alpha,beta,gamma):
    """
    Inverse rotation from a point p2 in 3D space to the original coordinate system.

    Input
    :param p: A 3 element array containing the new rotated position (x2,y2,z2)
    :param alpha: The roll angle (radians)
    :param beta: The pitch angle (radians)
    :param gamma: The yaw angle (radians)

    Output
    :return: A 3 element array containing the original (x1,y1,z1) position]

    """
    p = np.array(p2)
    rotation_matrix = euler_rotation_matrix(alpha, beta, gamma)
    inverse_matrix = np.transpose(rotation_matrix)
    original = inverse_matrix.dot(p)
    return original.tolist()[0]

def transform_pose(P,Q,T,R):
    """
    Takes a position and orientation in the original frame along with a translation and
    rotation 

    Then converts the original point into the new coordinate system

    Input
    :param P: A 3 element array containing the position (x0,y0,z0) in the original frame
    :param Q: A 4 element array containing the quaternion (q0,q1,q2,q3) 
    :param T: A 3 element array containing the vector between the origins in the two coordinate systems (dx,dy,dz) 
    :param R: A 4 element array containing the rotation in the form of a quaternion (q0,q1,q2,q3) 

    Output
    :return: New Pose, A 3 element array (x1,y2,z1) containing the position in the new coordinate frame
    :return: New Quaternion, A 4 element array containing the orientation (q0,q1,q2,q3) in the new coordinate frame

    """
    #I'm not finding any resources to explain how to do this or any examples to test input/output so this could be totally wrong

    #First get the rotation matrix by multiplying the quaternions
    new_orientation = quaternion_multiply(Q, R)
    rot_matrix = quaternion_rotation_matrix(new_orientation)

    #Translate the point by expanding it (could I just add the vectors?)
    translation_matrix = np.matrix([
        [1, 0, 0, T[0]],
        [0, 1, 0, T[1]],
        [0, 0, 1, T[2]],
        [0, 0, 0, 1]
        ])
    orig = np.array(P)
    extended = np.append(orig, 1)
    translate_orig = translation_matrix.dot(extended)
    translated = translate_orig.tolist()[0]

    #Now rotate the translated point by the rotation matrix calculated above
    temp = np.array(translated[0:3])
    rotated = rot_matrix.dot(temp)
    new_position = rotated.tolist()[0]

    return new_position, new_orientation

def main():
    p1 = np.array([3,2,1])

    alpha = (60/360.0)*np.pi
    beta =  (30/360.0)*np.pi
    gamma = (45/360.0)*np.pi

    print(f'original coordinates p1: {p1}')
    print(f'Rotated by Roll {alpha}, Pitch {beta}, Yaw: {gamma}')
    p2 = rotate(p1,alpha,beta,gamma)

    print(f'rotated coordinates p2:{p2}')
    p1_ = inverse_rotation(p2,alpha,beta,gamma)

    print(f'inverse rotation back into original coordinates p1_:{p1_}')

if __name__ == '__main__':
    main()



