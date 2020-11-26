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

class Planner(Node):
    def __init__(self):
        super().__init__('Planner')

        #subscribe to the laser scan messages
        '''
        self.scan_subscription = self.create_subscription(
            LaserScan,
            '/en613/scan',
            self.scan_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
            )
        '''
        #self.subscription #prevent unused variable warning

        self.pose_subscription = self.create_subscription(
            Odometry, 
            '/en613/odom',
            self.travel_straight_to_point, 
            10)
        
        #keep track of our Odometry state
        #self.Odometry = Odometry()

        #what will we need to publish?
        self.publisher_ = self.create_publisher(Twist, '/en613/cmd_vel', 1)

    #def scan_callback(self, msg) :
   
    #def odom_callback(self, msg) :
    #    self.Odometry = msg
    #    self.get_logger().info("updating odom")

    def travel_straight_to_point(self, msg) :
        x_dist = goal[0] - msg.pose.pose.position.x
        y_dist = goal[1] - msg.pose.pose.position.y
        self.get_logger().info("distance from goal: x - {}, y - {}".format(x_dist, y_dist))
        total_dist = np.sqrt(x_dist * x_dist + y_dist * y_dist)

        vel = Twist()
        if (total_dist >= 0.1) : #close enough
            yaw = quaternion_to_euler(msg.pose.pose.orientation)[2] #(roll, pitch, yaw)
            angle_to_point = np.arctan2(y_dist, x_dist)
            yaw_dist = angle_to_point - yaw
            if yaw_dist > 0.1 :
                self.get_logger().info("Turning left to move to point current yaw {} angle {}".format(yaw, angle_to_point))
                vel.angular.z = 0.05 #slowly start turning to try to get to the right angle
                vel.linear.x = 0.0
            elif yaw_dist < -0.1 :
                #turn right
                self.get_logger().info("Turning right to move to point current yaw {} angle {}".format(yaw, angle_to_point))
                vel.angular.z = -0.05 #slowly start turning to try to get to the right angle
                vel.linear.x = 0.0
            else :
                self.get_logger().info("Moving to point")
                vel.angular.z = 0.0
                vel.linear.x = 0.1 #start moving forward towards the point
            self.publisher_.publish(vel)

        else : 
            self.get_logger().info("Reached the goal")
            vel.linear.x = 0.0
            vel.angular.z = 0.0
            self.publisher_.publish(vel)
            sleep(10)
            #TODO, this doesnt really stop when I reach the goal, I should add it in

        #rclpy.spin()
        sleep(1)

    def circumnavigate_obstacle(self, msg):
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

def quaternion_to_euler(quat_array) :
    x = quat_array.x
    y = quat_array.y
    z = quat_array.z
    w = quat_array.w

    t0 = 2 * (w * x + y * z)
    t1 = 1 - 2 * (x * x + y * y)
    X = np.arctan2(t0, t1)

    t2 = 2 * (w * y - z * x)
    if t2 > 1 :
        t2 = 1
    elif t2 < -1 :
        t2 = -1
    Y = np.arcsin(t2)

    t3 = 2 * (w * z + x * y)
    t4 = 1 - 2 * (y * y + z * z)
    Z = np.arctan2(t3, t4)

    return [X, Y, Z]

def main(args=None):
    global goal
    rclpy.init(args=args)

    argv = sys.argv[1:]
    
    goal = [float(argv[0]), float(argv[1]), float(argv[2])] #x,y,z

    planner = Planner()

    #planner.travel_straight_to_point()

    rclpy.spin(planner)

    


    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    planner.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
