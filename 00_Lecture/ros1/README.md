# ROS1
### code for python
add head in python file :  
#!/usr/bin/env python  
### catkin
install python catkin :   
~$ sudo apt-get install python3-catkin-tools  
### turtlebot3 burger
PC : ~$ roscore  
SBC : ~$ roslaunch turtlebot3_bringup turtlebot3_robot.launch  
PC : ~$ roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch  
### cv_camera adjust wi
SBC :  
~$ rosparam set cv_camera/image_width 320
~$ rosparam set cv_camera/image_height 280
~$ rosrun cv_camera cv_camera_node
PC : ~$ rqt   
