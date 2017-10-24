#include <ros/ros.h>
#include <nodelet/loader.h>

#include "uvc_camera_test/camera_test.h"
#include <stdlib.h>

int main (int argc, char **argv) {
  ros::init(argc, argv, "uvc_camera_test");

  uvc_camera_test::CameraTest camera_test(ros::NodeHandle(), ros::NodeHandle("~"));
  usleep(5000000);
  //camera_test.ExposureLoop();
  //camera_test.SaveImage(60);//60ms

  ros::spin();
  return 0;
}

