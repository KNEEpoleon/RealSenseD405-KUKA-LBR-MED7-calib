import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/harry/cmu/capstone/calibration_ws/handeye_calibration_ws/src/install/handeye_ak'
