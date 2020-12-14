import os
from setuptools import setup
from glob import glob

package_name = 'robot_control_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'straight_to_point_action_server = robot_control_pkg.straight_to_point_action_server:main',
            'circumnavigate_action_server = robot_control_pkg.circumnavigate_action_server:main',
            'bug_client = robot_control_pkg.client:main'
            ],
    },
)
