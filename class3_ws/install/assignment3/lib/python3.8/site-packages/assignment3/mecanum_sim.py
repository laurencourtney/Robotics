import rclpy
from time import sleep
from rclpy.duration import Duration
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
import numpy as np
from .assignment3 import Mecanum

class MinimalSubscriber(Node) :

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.listener_callback,
            10)
        self.subscription # prevent unused variable warning

        #Set up publishers to the four wheels
        self.publisher_fl = self.create_publisher(Twist, 'fl_wheel_vel_cmd', 10)
        self.publisher_fr = self.create_publisher(Twist, 'fr_wheel_vel_cmd', 10)
        self.publisher_bl = self.create_publisher(Twist, 'bl_wheel_vel_cmd', 10)
        self.publisher_br = self.create_publisher(Twist, 'br_wheel_vel_cmd', 10)


    def listener_callback(self, msg):
        linear = msg.linear #a vector with 3 vals
        angular = msg.angular #a vector with 3 vals
        self.get_logger().info('I heard: "{}, {}"'.format(linear, angular)) 

        self.publish_vel(linear, angular)

    def publish_vel(self, linear, angular):
        #input should be two msgs (type Vector3) of length 3
        #inverse takes the starting state (position) [x,y,theta] and the desired        #velocity vector [Vx, Vy, Vtheta]. It doesn't use starting state (not
        #sure where it goes) so for now I will pass 0s for the state vector

        #we are supposed to be able to take in various inputs of wheel size etc
        #where are these parameters passed?? for now hardcode

        mecanum = Mecanum(.3, 0.15, 0.05, 0.01, 45/360*np.pi)
        #choosing v vector based on email from prof
        wheels = mecanum.inverse([0,0,0], [linear.x, linear.y, angular.z])

        #publish to each of the wheels, just the angular velocity
        #also how do we know which wheel is which?
        msg_fl = Twist()
        msg_fl.angular.x = wheels[0]
        self.publisher_fl.publish(msg_fl)
        self.get_logger().info("I published {} to the front left wheel.".format(msg_fl.angular.x))

        msg_fr = Twist()
        msg_fr.angular.x = wheels[1]
        self.publisher_fr.publish(msg_fr)
        self.get_logger().info("I published {} to the front right wheel.".format(msg_fr.angular.x))

        msg_bl = Twist()
        msg_bl.angular.x = wheels[2]
        self.publisher_bl.publish(msg_bl)
        self.get_logger().info("I published {} to the back left wheel.".format(msg_bl.angular.x))

        msg_br = Twist()
        msg_br.angular.x = wheels[3]
        self.publisher_br.publish(msg_br)
        self.get_logger().info("I published {} to the back right wheel.".format(msg_br.angular.x))

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rcply.shutdown()

if __name__ == '__main__':
    main()

