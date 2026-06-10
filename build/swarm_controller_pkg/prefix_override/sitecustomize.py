import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/intern/px4_ros_com_ws/install/swarm_controller_pkg'
