import math
import rclpy
from time import sleep
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy
from std_msgs.msg import String
from geometry_msgs.msg import Pose, Twist
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
import numpy as np
import sys
from rclpy.executors import MultiThreadedExecutor
from rclpy.action import ActionServer
from action_package.action import Circumnavigate

count = 0

class CircumnavigateActionServer(Node):
    def __init__(self):
        super().__init__('CircumnavigateActionServer')

        #set up the action server
        self._action_server = ActionServer(
            self,
            Circumnavigate,
            'circumnavigate',
            self.execute_callback)

        #subscribe to the laser scan messages
        self.scan_subscription = self.create_subscription(
            LaserScan,
            '/en613/scan',
            self.scan_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
            )

        #subscribe to the odometry messages
        self.odom_subscription = self.create_subscription(
            Odometry, 
            '/en613/odom',
            self.odom_callback,
            10
            )

        self.publisher_ = self.create_publisher(Twist, '/en613/cmd_vel', 1)

    def scan_callback(self, msg) :
        global obs_dist
        obs_dist = {'front': min(msg.ranges[113:226]), 'left':min(msg.ranges[226:300]), 'right':min(msg.ranges[75:113])}

    def odom_callback(self, msg) :
        global position
        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y
        z = msg.pose.pose.position.z
        position = [x,y,z]

    def execute_callback(self, goal_handle):
        global position
        self.get_logger().info("Executing Circumnavigate obstacle.. ")
        reached = 0
        closest = position
        while(not reached) :
            reached, closest, current = self.circumnavigate_obstacle(goal_handle.request.ending_point, goal_handle.request.goal_point, closest)

        goal_handle.succeed()

        result = Circumnavigate.Result()
        result.closest_point = closest
        result.current_point = current
        return result

    def circumnavigate_obstacle(self, ending_point, goal_point, current_closest):
        global obs_dist #minimum distances in front, left, right - from laser scan
        global position #current position - from odometry
        global count #to make sure we dont stop before we've even started
        current_min_dist = euclidean_distance(current_closest, goal_point)

        #this state will tell us how to move the robot
        state = 0
        #read in the laser scan messages, figure out if there is an obstacle
        #we will figure out if the obstacle is in the front, left, or right
        #our laser scanner has 340 beams from -2.26 to 2.26, 340/3~113
        
        #set a minimum distance to take action
        self.get_logger().info("min ranges: front {}, left {}, right {}".format(obs_dist['front'], obs_dist['left'], obs_dist['right']))
        min_dist = .3
  
        #handle the case where obstacles are in different areas - we want to follow the obstacles
        #in front only
        if obs_dist['front'] < min_dist and obs_dist['left'] > min_dist and obs_dist['right'] > min_dist :
            state = 0 #turn - we're up against a wall. will always turn right, so wall should always be on our left
        #on right only
        elif obs_dist['front'] > min_dist and obs_dist['left'] > min_dist and obs_dist['right'] < min_dist :
            state = 0 #turn until the wall is on our left
        #on left only
        elif obs_dist['front'] > min_dist and obs_dist['left'] < min_dist and obs_dist['right'] > min_dist :
            state = 1 #we're up against the wall, keep moving forward
        #not near wall
        elif obs_dist['front'] > min_dist and obs_dist['left'] > min_dist and obs_dist['right'] > min_dist :
            state = 2 #move and turn a bit to find the wall, keep the bug close to the wall
        #wall in front and on right
        elif obs_dist['front'] < min_dist and obs_dist['left'] > min_dist and obs_dist['right'] < min_dist :
            state = 0 #turn so the wall is on the left
        #wall in front and on left
        elif obs_dist['front'] < min_dist and obs_dist['left'] < min_dist and obs_dist['right'] > min_dist :
            state = 0 #turn so the wall is on the left
        #wall on right and on left
        elif obs_dist['front'] > min_dist and obs_dist['left'] < min_dist and obs_dist['right'] < min_dist :
            state = 2 #move and turn a bit to find the wall - bug always wants to be close to a wall
        #wall in all three spots
        elif obs_dist['front'] < min_dist and obs_dist['left'] < min_dist and obs_dist['right'] < min_dist :
            state = 0 #turn so the wall is just on the left

        self.publish_cmd(state)

        #this will determine if we are closer to the original point and set a new closest
        current_pose = position
        current_dist = euclidean_distance(current_pose, goal_point)
        if current_dist < current_min_dist :
            self.get_logger().info("Updating the closest value to ({}, {})".format(current_pose[0], current_pose[1]))
            current_closest = current_pose

        #this will determine if have finished circumnavigation
        dist_from_end = euclidean_distance(current_pose, ending_point)
        if ((dist_from_end < .2) and (count > 100)):
            self.get_logger().info("Current position: ({},{}), ending point: ({},{})".format(current_pose[0], current_pose[1], ending_point[0], ending_point[1])),
            self.get_logger().info("Reached the ending point: closest [{}, {}]".format(current_closest[0], current_closest[1]))
            msg = Twist()
            self.publisher_.publish(msg) #publish an empty message to stop the robot
            return 1, current_closest, current_pose

        else :
            count += 1
            return 0, current_closest, current_pose


    def publish_cmd(self, state):

        msg = Twist()
        #the command we publish will depend on the state
        if state == 0 : #turn right
            self.get_logger().info("state 0 - turn right")
            msg.angular.z = -0.02
        
        if state == 1: #we're against the wall, move forward
            self.get_logger().info("state 1 - move forward along the wall")
            msg.linear.x = 0.01#worked with 0.01
        
        if state == 2: #turn left and move a little to find the wall
            self.get_logger().info("state 2 - turn and move")
            msg.linear.x = 0.01
            msg.angular.z = 0.02

        self.publisher_.publish(msg)

        sleep(2)
       

def euclidean_distance(starting_loc, goal_loc) :
    x_dist = goal_loc[0] - starting_loc[0]
    y_dist = goal_loc[1] - starting_loc[1]
    dist = np.sqrt(x_dist * x_dist + y_dist * y_dist)
    return dist

def main(args=None):
    global goal
    rclpy.init(args=args)

    cnvg = CircumnavigateActionServer()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(cnvg)
    executor.spin()


    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    executor.shutdown()
    cnvg.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
