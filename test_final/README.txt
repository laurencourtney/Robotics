This project will run the BugOne algorithm to navigate a robot through a maze. 

It launches two action servers - StraightToPoint and Circumnavigate, along with a client to handle path planning.

This code will need to be executed in a ROS2 environment.

To build this workspace, in the test_final directory run 'colcon build --symlink-install'
Run all subsequent launch commands from test_final.

In each terminal run 'source install/setup.bash'

To launch the robot in Gazebo, run 'ros2 launch robot_spawner_pkg final_gazebo_spawn.launch.py'

To run the action servers and begin the robot's navigation through the maze, run 'ros2 launch robot_control_pkg bugone.launch.py' in a separate terminal.

The included videos show the robot's navigation through the four possible routes. To change the route, update src/template/robot_spawner_pkg/launch/final_gazebo_spawn.launch.py.
In the spawn_entity Node, update the third value in the arguments list to any value from '0' to '3' to choose an alternate starting location and goal point.
