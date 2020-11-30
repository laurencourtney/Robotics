import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
import sys
from action_package.action import Circumnavigate

class CircumnavigateActionClient(Node) :
    def __init__(self):
        super().__init__('CircumnavigateActionClient')

        self._action_client = ActionClient(self, Circumnavigate, 'circumnavigate')

    def send_goal(self, end, goal):
        goal_msg = Circumnavigate.Goal()
        goal_msg.ending_point = end
        goal_msg.goal_point = goal

        self._action_client.wait_for_server()
        self._action_client.send_goal_async(goal_msg)

def main(args=None) :
    rclpy.init(args=args)
    action_client = CircumnavigateActionClient()

    action_client.send_goal([3.216898, -.311153064, 0.0], [4.0, 0.0, 0.0])

    rclpy.spin(action_client)

if __name__ == '__main__' :
    main()

