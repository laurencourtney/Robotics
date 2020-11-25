import math
import rclpy
from time import sleep
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy
from std_msgs.msg import String
from geometry_msgs.msg import Pose, Twist
from sensor_msgs.msg import LaserScan
import numpy as np

class Planner(Node):
    def __init__(self):
        super().__init__('Planner')

        #subscribe to the laser scan messages
        self.subscription = self.create_subscription(
            LaserScan,
            '/en613/scan',
            self.scan_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
            )

        self.subscription #prevent unused variable warning

        #what will we need to publish?
        self.publisher_ = self.create_publisher(Twist, '/en613/cmd_vel', 1)

    def scan_callback(self, msg):
        #this state will tell us how to move the robot
        state = 0
        #read in the laser scan messages, figure out if there is an obstacle
        #we will figure out if the obstacle is in the front, left, or right
        #our laser scanner has 340 beams from -2.26 to 2.26, 340/3~113
        obs_dist = {'front': min(msg.ranges[113:226]), 'left':min(msg.ranges[226:300]), 'right':min(msg.ranges[75:113])}
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
        
        #then publish nothing so the robot doesn't keep spinning
        #msg = Twist()
        #self.publisher_.publish(msg)

        #sleep(1)

def main(args=None):
    rclpy.init(args=args)

    planner = Planner()

    rclpy.spin(planner)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    planner.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
