import rclpy
from rclpy.node import Node

from px4_msgs.msg import VehicleLocalPosition


class LeaderListener(Node):

    def __init__(self):
        super().__init__('leader_listener')

        self.subscription = self.create_subscription(
            VehicleLocalPosition,
            '/fmu/out/vehicle_local_position_v1',
            self.position_callback,
            10
        )

    def position_callback(self, msg):
        self.get_logger().info(
            f'Leader Position -> x={msg.x:.2f}, y={msg.y:.2f}, z={msg.z:.2f}'
        )


def main(args=None):
    rclpy.init(args=args)

    node = LeaderListener()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()
