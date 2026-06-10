import rclpy
from rclpy.node import Node

from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import DurabilityPolicy
from rclpy.qos import HistoryPolicy

from px4_msgs.msg import VehicleLocalPosition


class LeaderListener(Node):

    def __init__(self):
        super().__init__('leader_listener')

        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.subscription = self.create_subscription(
            VehicleLocalPosition,
            '/fmu/out/vehicle_local_position_v1',
            self.position_callback,
            qos_profile
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


if __name__ == '__main__':
    main()