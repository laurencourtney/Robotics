import os

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription([
        Node(package='robot_control_pkg', executable='straight_to_point_action_server', output='screen'),
        Node(package='robot_control_pkg', executable='circumnavigate_action_server', output='screen'),
        Node(package='robot_control_pkg', executable='bug_client', output='screen'),
        ])

