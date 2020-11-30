import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
import sys
from action_package.action import StraightToPoint

class StraightToPointActionClient(Node) :
    def __init__(self):
        super().__init__('StraightToPointActionClient')

        self._action_client = ActionClient(self, StraightToPoint, 'straight_to_point')

    def send_goal(self, dest):
        goal_msg = StraightToPoint.Goal()
        goal_msg.dest = dest

        self._action_client.wait_for_server()
        self._action_client.send_goal_async(goal_msg)

def main(args=None) :
    rclpy.init(args=args)
    action_client = StraightToPointActionClient()

    action_client.send_goal([4.0,0.0,0.0])

    rclpy.spin(action_client)

if __name__ == '__main__' :
    main()

