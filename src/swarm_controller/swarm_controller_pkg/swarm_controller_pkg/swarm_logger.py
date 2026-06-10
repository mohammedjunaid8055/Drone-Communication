import rclpy
from rclpy.node import Node
from px4_msgs.msg import VehicleLocalPosition
import csv
import os

class SwarmLogger(Node):

    def __init__(self):
        super().__init__('swarm_logger')

        self.csv_file = 'drone_positions.csv'

        if not os.path.exists(self.csv_file):
            with open(self.csv_file, 'w', newline='') as f:
                writer = csv.writer(f)
                writer.writerow([
                    'timestamp',
                    'drone_id',
                    'x',
                    'y',
                    'z',
                    'vx',
                    'vy',
                    'vz'
                ])

        for i in range(1, 9):

            topic = f'/px4_{i}/fmu/out/vehicle_local_position_v1'

            self.create_subscription(
                VehicleLocalPosition,
                topic,
                lambda msg, drone=i: self.position_callback(msg, drone),
                10
            )

            self.get_logger().info(
                f'Subscribed to {topic}'
            )

    def position_callback(self, msg, drone_id):

        with open(self.csv_file, 'a', newline='') as f:

            writer = csv.writer(f)

            writer.writerow([
                msg.timestamp,
                f'px4_{drone_id}',
                msg.x,
                msg.y,
                msg.z,
                msg.vx,
                msg.vy,
                msg.vz
            ])


def main(args=None):

    rclpy.init(args=args)

    node = SwarmLogger()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
