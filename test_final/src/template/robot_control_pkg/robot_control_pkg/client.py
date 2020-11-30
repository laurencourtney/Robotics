import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
import sys
from action_package.action import StraightToPoint
from action_package.action import Circumnavigate

class BugOne(Node) :
    def __init__(self):
        super().__init__('BugOne')

        self._action_client_stp = ActionClient(self, StraightToPoint, 'straight_to_point')
        self._action_client_cnvg = ActionClient(self, Circumnavigate, 'circumnavigate')

    def send_goal_stp(self, dest):
        goal_msg = StraightToPoint.Goal()
        goal_msg.dest = dest

        self._action_client_stp.wait_for_server()
        self._send_goal_future = self._action_client_stp.send_goal_async(goal_msg)
        
        #self._send_goal_future.add_done_callback(self.goal_response_callback)
        rclpy.spin_until_future_complete(self, self._send_goal_future)
        #def goal_response_callback(self, future):
        goal_handle = self._send_goal_future.result()

        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected.")
            return

        self.get_logger().info("Goal accepted.")

        self._get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, self._get_result_future)

        #self._get_result_future.add_done_callback(self.get_result_callback)

        #def get_result_callback(self, future):
        #global result
        result = self._get_result_future.result().result
        self.get_logger().info("Result retrieved.")
        return result

    def send_goal_cnvg(self, end, goal):
        goal_msg = Circumnavigate.Goal()
        goal_msg.ending_point = end
        goal_msg.goal_point = goal

        self._action_client_cvng.wait_for_server()
        self._send_goal_future = self._action_client_cnvg.send_goal_async(goal_msg)
    
        self._send_goal_future.add_done_callback(self.goal_response_callback)

def main(args=None) :
    #global result
    rclpy.init(args=args)

    #set up our node
    client = BugOne()
    
    #first we will try to go straight to the point
    
    result = client.send_goal_stp([-1.0,-1.0,0.0])
    print(result)
    new_loc = client.send_goal_stp([0.0,3.0,0.0])
    #rclpy.spin_until_future_complete(client, client._get_result_future)
    #client.get_logger().info("Result: {}".format(result))
    #action_client = CircumnavigateActionClient()

    #action_client.send_goal([3.216898, -.311153064, 0.0], [4.0, 0.0, 0.0])

    #rclpy.spin(action_client)


if __name__ == '__main__' :
    main()

