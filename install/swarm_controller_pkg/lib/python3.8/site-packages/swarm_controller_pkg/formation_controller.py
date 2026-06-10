import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import DurabilityPolicy
from rclpy.qos import HistoryPolicy

from px4_msgs.msg import (
    VehicleLocalPosition,
    OffboardControlMode,
    TrajectorySetpoint,
    VehicleCommand
)


class FormationController(Node):

    def __init__(self):

        super().__init__('formation_controller')

        self.leader_x = 0.0
        self.leader_y = 0.0
        self.leader_z = -3.0

        self.offset_x = -2.0
        self.offset_y = -2.0
        qos_profile = QoSProfile(
        reliability=ReliabilityPolicy.BEST_EFFORT,
        durability=DurabilityPolicy.TRANSIENT_LOCAL,
        history=HistoryPolicy.KEEP_LAST,
        depth=1
        )

        self.create_subscription(
        VehicleLocalPosition,
        '/px4_1/fmu/out/vehicle_local_position_v1',
        self.leader_callback,
        qos_profile
        )

        self.offboard_pub = self.create_publisher(
            OffboardControlMode,
            '/px4_2/fmu/in/offboard_control_mode',
            10
        )

        self.setpoint_pub = self.create_publisher(
            TrajectorySetpoint,
            '/px4_2/fmu/in/trajectory_setpoint',
            10
        )

        self.command_pub = self.create_publisher(
            VehicleCommand,
            '/px4_2/fmu/in/vehicle_command',
            10
        )

        self.counter = 0

        self.timer = self.create_timer(
            0.1,
            self.timer_callback
        )

    def leader_callback(self, msg):

        self.leader_x = msg.x
        self.leader_y = msg.y
        self.leader_z = msg.z

        self.get_logger().info(
            f'Leader Pos -> ({msg.x:.2f}, {msg.y:.2f}, {msg.z:.2f})'
        )

    def arm(self):

        msg = VehicleCommand()

        msg.command = VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM
        msg.param1 = 1.0

        msg.target_system = 3
        msg.target_component = 1

        self.command_pub.publish(msg)

        self.get_logger().info("Follower armed")

    def offboard_mode(self):

        msg = VehicleCommand()

        msg.command = VehicleCommand.VEHICLE_CMD_DO_SET_MODE
        msg.param1 = 1.0
        msg.param2 = 6.0

        msg.target_system = 3
        msg.target_component = 1

        self.command_pub.publish(msg)

        self.get_logger().info("Follower OFFBOARD")

    def timer_callback(self):

        offboard = OffboardControlMode()
        offboard.position = True

        self.offboard_pub.publish(offboard)

        target_x = self.leader_x + self.offset_x
        target_y = self.leader_y + self.offset_y
        target_z = self.leader_z

        traj = TrajectorySetpoint()

        traj.position = [
            target_x,
            target_y,
            target_z
        ]

        traj.yaw = 0.0

        self.setpoint_pub.publish(traj)

        self.counter += 1

        if self.counter == 20:
            self.offboard_mode()
            self.arm()

        if self.counter % 50 == 0:
            self.get_logger().info(
                f'Follower Target -> ({target_x:.2f}, {target_y:.2f}, {target_z:.2f})'
            )


def main(args=None):

    rclpy.init(args=args)

    node = FormationController()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
