import rclpy
from time import sleep
from rclpy.duration import Duration
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
import numpy as np
#from .assignment3 import forward, inverse

class MinimalSubscriber(Node) :

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.listener_callback,
            10)
        self.subscription # prevent unused variable warning

        #This node is supposed to publish stuff, do i do it here?
        #self.publisher_ = self.create_publisher(Twist, 'fl_wheel_vel_cmd', 10)
        #if this is how I do it, then should there be 4 of these?
        
        #setting up this buffer but idk if I need it
        #self._tf_buffer = tf2_ros.Buffer()
        #self.listener = tf2_ros.TransformListener(self._tf_buffer,self)


    def listener_callback(self, msg):
        #coordinates.py has a waiting part? leaving out for now

        linear = msg.linear #this might be a vector with 3 vals?
        angular = msg.angular #this might be a vector with 3 vals?
        
        #just for practice try to just print these things?
        self.get_logger().info('I heard: "{}, {}"'.format(linear, angular)) 
            
        #self.publish_vel(linear, angular)

    def publish_vel(self, linear, angular):
        #input should be two vectors of length 3
        #msg = Twist()
        #what is supposed to happen here?
        return None

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

