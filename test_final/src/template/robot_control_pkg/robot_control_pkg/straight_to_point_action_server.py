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
from rclpy.action import ActionServer
from action_package.action import StraightToPoint
from rclpy.executors import MultiThreadedExecutor

current_loc = [0,0,0] #[x,y,yaw]

class StraightToPointActionServer(Node):
    def __init__(self):
        super().__init__('StraightToPointActionServer')
        self._action_server = ActionServer(
            self,
            StraightToPoint,
            'straight_to_point',
            self.execute_callback)

        self.pose_subscription = self.create_subscription(
            Odometry, 
            '/en613/odom',
            self.odom_callback, 
            10)
        
        self.publisher_ = self.create_publisher(Twist, '/en613/cmd_vel', 1)

    def odom_callback(self, msg) :
        global current_loc

        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y
        yaw = quaternion_to_euler(msg.pose.pose.orientation)[2]

        current_loc = [x,y,yaw]

    def travel_straight_to_point(self, goal, loc) :
        x_dist = goal[0] - loc[0]
        y_dist = goal[1] - loc[1]
        self.get_logger().info("distance from goal: x - {}, y - {}".format(x_dist, y_dist))
        total_dist = np.sqrt(x_dist * x_dist + y_dist * y_dist)

        vel = Twist()
        if (total_dist >= 0.1) : #close enough
            angle_to_point = np.arctan2(y_dist, x_dist)
            yaw_dist = angle_to_point - loc[2]
            if yaw_dist > 0.1 :
                self.get_logger().info("Turning left to move to point current yaw {} angle {}".format(loc[2], angle_to_point))
                vel.angular.z = 0.05 #slowly start turning to try to get to the right angle
                vel.linear.x = 0.0
            elif yaw_dist < -0.1 :
                #turn right
                self.get_logger().info("Turning right to move to point current yaw {} angle {}".format(loc[2], angle_to_point))
                vel.angular.z = -0.05 #slowly start turning to try to get to the right angle
                vel.linear.x = 0.0
            else :
                self.get_logger().info("Moving to point")
                vel.angular.z = 0.0
                vel.linear.x = 0.05 #start moving forward towards the point
            self.publisher_.publish(vel)
            return 0 #meaning we havent reached the goal yet

        else : 
            self.get_logger().info("Reached the goal")
            vel.linear.x = 0.0
            vel.angular.z = 0.0
            self.publisher_.publish(vel)
            return 1 #we have reached the goal

    def execute_callback(self, goal_handle) :
        self.get_logger().info('Executing goal for StraightToPoint... ')
        reached = 0
        while(not reached) :
            reached = self.travel_straight_to_point(goal_handle.request.dest, current_loc)
        #we are out of reached so we must have succeeded 
        goal_handle.succeed()

        result = StraightToPoint.Result()
        result.final = current_loc #we should have stopped at the destination
        return result


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

    stp = StraightToPointActionServer()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(stp)

    executor.spin()

    #rclpy.spin(stp)
    
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    executor.shutdown()
    stp.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
