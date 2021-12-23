# ROS1
### code for python
add head in python file :  
#!/usr/bin/env python  
### catkin
install python catkin :   
~$sudo apt-get install python3-catkin-tools  
### turtlebot3 burger
PC : ~$roscore  
SBC : ~$roslaunch turtlebot3_bringup turtlebot3_robot.launch  
PC : ~$roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch  
### cv_camera adjust width / height : http://wiki.ros.org/cv_camera
SBC :  
~$rosparam set cv_camera/image_width 320  
~$rosparam set cv_camera/image_height 280  
~$rosrun cv_camera cv_camera_node  
PC : ~$rqt   
### gazebo world
singler :  
~$roslaunch turtlebot3_gazebo turtlebot3_empty_world.launch  
mulipler :  
~$roslaunch turtlebot3_gazebo multi_turtlebot3.launch  
ex) copy below directory with multi_turtlebot3_empty_world.launch  
target Dir : ~/Develops/ros1/turtlebot_ws/src/turtlebot3_simulations/turtlebot3_gazebo/launch
