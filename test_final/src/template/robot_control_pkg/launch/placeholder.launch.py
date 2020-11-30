import os

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription([
        #Node(package='robot_control_pkg', executable='placeholder_control',
        # output='screen'),
        Node(package='robot_control_pkg', executable='placeholder_estimator',
        	 output='screen'),
        #Node(package='robot_control_pkg', executable='path_planner',
        #        arguments = ['1.0', '2.0', '0.1'], output='screen'), #args = x,y,z
        Node(package='robot_control_pkg', executable='straight_to_point_action_server', output='screen'),
        Node(package='robot_control_pkg', executable='circumnavigate_action_server', output='screen'),
        ])

