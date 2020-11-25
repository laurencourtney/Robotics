
''' ####################
    EN605.613 - Introduction to Robotics
    Assignment 2
    Coordinate Transforms
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
    :param alpha: The yaw angle (radians)

    Output
    :return: A 3x3 element matix containing the rotation matrix

    """
    pass


def quaternion_rotation_matrix(Q):
    """
    Creates a 3x3 rotation matrix in 3D space from a quaternion.

    Input
    :param q: A 4 element array containing the quaternion (q0,q1,q2,q3) 

    Output
    :return: A 3x3 element matix containing the rotation matrix

    """
    pass

def quaternion_multiply(Q0,Q1):
    """
    Multiplies two quaternions.

    Input
    :param Q0: A 4 element array containing the first quaternion (q01,q11,q21,q31) 
    :param Q1: A 4 element array containing the second quaternion (q02,q12,q22,q32) 

    Output
    :return: A 4 element array containing the final quaternion (q03,q13,q23,q33) 

    """
    pass


def rotate(p1,alpha,beta,gamma):
    """
    Rotates a point p1 in 3D space to a new coordinate system.

    Input
    :param p: A 3 element array containing the original (x1,y2,z1) position]
    :param alpha: The roll angle (radians)
    :param beta: The pitch angle (radians)
    :param alpha: The yaw angle (radians)

    Output
    :return: A 3 element array containing the new rotated position (x2,y2,z2)

    """
    pass


def inverse_rotation(p2,alpha,beta,gamma):
    """
    Inverse rotation from a point p2 in 3D space to the original coordinate system.

    Input
    :param p: A 3 element array containing the new rotated position (x2,y2,z2)
    :param alpha: The roll angle (radians)
    :param beta: The pitch angle (radians)
    :param alpha: The yaw angle (radians)

    Output
    :return: A 3 element array containing the original (x1,y1,z1) position]

    """
    pass


def transform_pose(P,Q,T,R):
    """
    Takes a position and orientation in the original frame along with a translation and
    rotation 

    Then converts the original point into the new coordinate system

    Input
    :param P: A 3 element array containing the position (x0,y0,z0) in the original frame
    :param Q: A 4 element array containing the quaternion (q0,q1,q2,q3) 
    :param T: A 3 element array containing the vector between the origins in the two coordinate systems (dx,dy,dz) 
    :param Q: A 4 element array containing the rotation in the form of a quaternion (q0,q1,q2,q3) 

    Output
    :return: New Pose, A 3 element array (x1,y2,z1) containing the position in the new coordinate frame
    :return: New Quaternion, A 4 element array containing the orientation (q0,q1,q2,q3) in the new coordinate frame

    """

    placeholder_x = np.zeros(3)
    placeholder_q = np.zeros(4)
    ## TODO: replace placeholder values with actual transformed values
    return placeholder_x,placeholder_q


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



