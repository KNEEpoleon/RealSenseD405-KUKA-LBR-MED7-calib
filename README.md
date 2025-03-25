### To run this, we follow the steps outlined here: 
https://github.com/shengyangzhuang/handeye_calibration_ros2/tree/main

We initialise the LBR server, taking care to change the mode to hardware and also robot to MED7. ros2 launch lbr_bringup hardware.launch.py  rviz:true   model:=med7


Then we initalize the realsense node. (ros2 launch handeye_realsense taking_sample_launch)

In the configs and a few other files, take care to use the right ROS topics for the camera image and whatnot as well as change the link names as deemed appropriate.

(ros2 launch handeye_realsense taking_sample_launch.py -> build handeye_realsense as a package so that you can launch)

Lastly, we run the waypoint script to send commands to the KUKA arm to move the end effector to various poses, we click 'q' on the CV2 window to collect an image of the ARUCO marker. After collecting at least 8 images, press 'e' to exit.

You may have to colcon build at different hierarchies in the folder depending on what you're testing.

ros2 run handeye_realsense handeye

ros2 run handeye_realsense eye2hand

<!-- ctrl + shift + v is useful to preview readme's -->

