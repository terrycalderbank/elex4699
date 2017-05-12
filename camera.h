#pragma once
//#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <raspicam/raspicam_cv.h>
//#include "highgui.hpp"

using namespace std;
using namespace cv;

typedef enum {GREEN, ORANGE, BOTH, NONE} Colour;

class Camera
{
public:

   raspicam::RaspiCam_Cv vid;

   cv::Mat frame;
   cv::Mat hsv_frame;
   cv::Mat green_segment;
   cv::Mat orange_segment;
   cv::Mat Adjustments;
   cv::Mat Dilation;
   cv::Mat Dilation_display;

   vector<Vec4i> hierarchy;
   vector<vector<Point>> contours;
   vector<Point> contour;

  
   Point target_position;
  
   

   int H_MIN = 0;
   int H_MAX = 256;
   int S_MIN = 0;
   int S_MAX = 256;
   int V_MIN = 0;
   int V_MAX = 256;

   double frequency = 0;
   double frame_rate = 0;

   Camera();

   int track_object(Colour input_colour);
   Colour detect_object();
   
   void Draw();


};



