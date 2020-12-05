import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
import sys
from action_package.action import StraightToPoint
from action_package.action import Circumnavigate
import numpy as np

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
        
        rclpy.spin_until_future_complete(self, self._send_goal_future)
        goal_handle = self._send_goal_future.result()

        if not goal_handle.accepted:
            self.get_logger().info("Stp Goal rejected.")
            return

        self.get_logger().info("Stp Goal accepted.")

        self._get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, self._get_result_future)

        result = self._get_result_future.result().result
        self.get_logger().info("Stp Result retrieved.")
        return result

    def send_goal_cnvg(self, end, goal):
        goal_msg = Circumnavigate.Goal()
        goal_msg.ending_point = end
        goal_msg.goal_point = goal

        self._action_client_cnvg.wait_for_server()
        self._send_goal_future = self._action_client_cnvg.send_goal_async(goal_msg)
    
        rclpy.spin_until_future_complete(self, self._send_goal_future)
        goal_handle = self._send_goal_future.result()

        if not goal_handle.accepted:
            self.get_logger().info("Cnvg Goal rejected.")
            return

        self.get_logger().info("Cnvg Goal accepted.")

        self._get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, self._get_result_future)

        result = self._get_result_future.result().result
        self.get_logger().info("Cnvg Result retrieved.")
        return result

def euclidean_distance(loc, goal) :
    xdiff = goal[0] - loc[0]
    ydiff = goal[1] - loc[1]
    return np.sqrt(xdiff * xdiff + ydiff * ydiff)

def main(args=None) :
    #global result
    rclpy.init(args=args)

    #set up our node
    client = BugOne()
    
    diff = 10
    goal = [-1.0, -1.0, 0.0]
    #first we will try to go straight to the point
    while(diff > .2) :#check what we've been setting this to
        stp_result = client.send_goal_stp(goal)
        current = stp_result.final
        diff = euclidean_distance(current, goal)
        if diff < .2 :
            break #probably a better way to do this
        #we aren't at the obstacle, so we should try to circumnavigate the obstacle starting from our current loc
        cnvg_full_result = client.send_goal_cnvg([float(i) for i in current], goal)
        #we should probably check if we made it to the goal here and didn't reach the end - check how cnvg handles
        closest_point = cnvg_full_result.closest_point
        current = cnvg_full_result.current_point
        diff = euclidean_distance(current, goal)
        if diff < .2 :
            break #means we reached the point while circumnavigating
        #go around the obstacle until you reach the closest point
        cnvg_partial_result = client.send_goal_cnvg([float(i) for i in closest_point], goal)
        #now we will loop again and try to go straight to that point, and if we hit another obstacle we will do this again
    print("Finished execution and reached point.")

if __name__ == '__main__' :
    main()

