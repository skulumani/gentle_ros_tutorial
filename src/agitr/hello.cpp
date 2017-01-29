// This is a ROS version of hello world

// Header to define the standard ROS classes
#include <ros/ros.h>

int main(int argc, char **argv){
    // Intialize the ROS system
    ros::init(argc, argv, "hello_ros");

    // Establish this program as a ROS node
    ros::NodeHandle nh;

    // Send some output as a log message
    ROS_INFO_STREAM("Hello ROS!");
}