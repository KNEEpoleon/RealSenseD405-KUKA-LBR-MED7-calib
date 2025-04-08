### To run this, we follow the steps outlined here: 
https://github.com/shengyangzhuang/handeye_calibration_ros2/tree/main

> The following code was tested with opencv-contrib-python 4.11.0.86!

Make the required changes to the files to ensure the link names are as lbr_bringup publishes to and change the aruco configurations to match the aruco tag being used.

ALWAYS REMEMBER TO DO A colcon build --symlink-install
Followed by a source install/setup.bash in calibration_ws

## Bringup LBR Server:

We initialise the LBR server, taking care to change the mode to hardware and also robot to MED7. 

```
ros2 launch lbr_bringup hardware.launch.py rviz:=true model:=med7
```

## Launch handeye_realsense taking_sample_launch

> at path calibration_ws/handeye_calibration_ws/src/handeye_calibration_ros2 

```
ros2 launch handeye_realsense taking_sample_launch.py
```

## Launch the RealSense camera node

> at path calibration_ws/

```
ros2 run realsense2_camera realsense2_camera_node
```

## Finally, give waypoints

> at path calibration_ws/handeye_calibration_ws/src/handeye_calibration_ros2/handeye_realsense/handeye_realsense

```
python joint_positions.py
```

click 'q' on the CV2 window to collect an image of the ARUCO marker. After collecting at least 8 images, press 'e' to exit.

___

You may have to colcon build at different hierarchies in the folder depending on what you're testing.

ros2 run handeye_realsense handeye

ros2 run handeye_realsense eye2hand
<!-- ctrl + shift + v is useful to preview readme's in VS CODE! -->

