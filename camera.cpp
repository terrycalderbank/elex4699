#include "camera.h"
#include <raspicam/raspicam.h>
//#include "opencv.hpp"

#define frame_width 640
#define frame_height 480

//Night
/*
#define GHL 61
#define GSL	70
#define GVL 0
#define GHU 93
#define GSU 255
#define GVU 255

#define OHL 110
#define OSL 97
#define OVL 52
#define OHU 121
#define OSU 255
#define OVU 255*/

//Day

#define GHL 61
#define GSL	83
#define GVL 72
#define GHU 99
#define GSU 255
#define GVU 255

#define OHL 111
#define OSL 117
#define OVL 119
#define OHU 127
#define OSU 255
#define OVU 255
using namespace cv;
using namespace raspicam;

//typedef enum {GREEN, ORANGE, BOTH} Colour;


Camera::Camera()
{
   //vid.set(CV_CAP_PROP_FORMAT, CV_8UC1);
   vid.set ( CV_CAP_PROP_FRAME_WIDTH, frame_width );
   vid.set ( CV_CAP_PROP_FRAME_HEIGHT, frame_height);
   vid.open();
   frequency = cv::getTickFrequency();
}

void Camera::Draw()
{
	cv::namedWindow("Adjustments", CV_WINDOW_AUTOSIZE);
	cv::createTrackbar("H_MIN", "Adjustments", &H_MIN, 256, NULL);
	cv::createTrackbar("H_MAX", "Adjustments", &H_MAX, 256, NULL);
	cv::createTrackbar("S_MIN", "Adjustments", &S_MIN, 256, NULL);
	cv::createTrackbar("S_MAX", "Adjustments", &S_MAX, 256, NULL);
	cv::createTrackbar("V_MIN", "Adjustments", &V_MIN, 256, NULL);
	cv::createTrackbar("V_MAX", "Adjustments", &V_MAX, 256, NULL);

	
	imshow("frame", frame);
	//imshow("GREEN",green_segment );
	//imshow("ORANGE",orange_segment);
	cvWaitKey(5);
}

Colour Camera::detect_object()//FIND AN OBJECT
{
	Rect green;
	Rect orange;
	vector<Vec4i> hierarchy;
	vector<vector<Point>> contours;
	vector<Point> contour;
	
	//GRAB FRAME
	vid.grab();
    vid.retrieve(frame); 
    cvtColor(frame, hsv_frame, CV_RGB2HSV);
    
    //GREEN
	inRange(hsv_frame, cv::Scalar(GHL,GSL,GVL), cv::Scalar(GHU,GSU,GVU), green_segment);
    //inRange(hsv_frame, cv::Scalar(H_MIN,S_MIN,V_MIN), cv::Scalar(H_MAX,S_MAX,V_MAX), green_segment);
    cv::erode(green_segment, Dilation, cv::Mat(),cv::Point(-1,-1), 2);
    cv::dilate(Dilation, Dilation, cv::Mat(), cv::Point(-1,-1), 1);
    findContours(Dilation, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
	for (unsigned int i = 0; i < contours.size(); i++)
	 {
		green = boundingRect(contours.at(i));
		
	 }
	 rectangle(frame, green, Scalar(0, 255, 0), 2);
	
    
    //ORANGE
    //inRange(hsv_frame, cv::Scalar(H_MIN,S_MIN,V_MIN), cv::Scalar(H_MAX,S_MAX,V_MAX), orange_segment);
	inRange(hsv_frame, cv::Scalar(OHL,OSL,OVL), cv::Scalar(OHU,OSU,OVU), orange_segment);
	cv::erode(orange_segment, Dilation, cv::Mat(),cv::Point(-1,-1), 2);
    cv::dilate(Dilation, Dilation, cv::Mat(), cv::Point(-1,-1), 1);
    findContours(Dilation, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
	for (unsigned int i = 0; i < contours.size(); i++)
	 {
		orange = boundingRect(contours.at(i));
		
	 }
	 rectangle(frame, orange, Scalar(0, 80, 255), 2);
	cout << "ORANGE :" << orange.area() << " GREEN: " << green.area() << endl;
	
	/*if(green.area() > 200) && (orange.area > 200))
	{
		return BOTH;
		cout << "BOTH\n\n";
	}*/
	if((green.area() > 150) && (orange.area() > 150))	
		return BOTH;
	if(green.area() > 150)
		return GREEN;
	if(orange.area() > 150)
		return ORANGE;
	else
		return NONE;
}

int Camera::track_object(Colour input_colour)
{
	Rect bound;
	vid.grab();
	vid.retrieve(frame);
	cvtColor(frame, hsv_frame, CV_RGB2HSV);
	
	if(input_colour == GREEN)
	{
		inRange(hsv_frame, cv::Scalar(GHL,GSL,GVL), cv::Scalar(GHU,GSU,GVU), green_segment);
		cv::erode(green_segment, Dilation, cv::Mat(),cv::Point(-1,-1), 2);
		cv::dilate(Dilation, Dilation, cv::Mat(), cv::Point(-1,-1), 1);
		findContours(Dilation, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		for (unsigned int i = 0; i < contours.size(); i++)
		 {
			bound = boundingRect(contours.at(i));
		 }
		 target_position = Point(-((frame_width/2) - (bound.x + bound.width/2))+40, ((frame_height/2) - (bound.y + bound.height/2)));
	}
	else if(input_colour == ORANGE)
	{
		//inRange(hsv_frame, cv::Scalar(H_MIN,S_MIN,V_MIN), cv::Scalar(H_MAX,S_MAX,V_MAX), orange_segment);
		inRange(hsv_frame, cv::Scalar(OHL,OSL,OVL), cv::Scalar(OHU,OSU,OVU), orange_segment);
		cv::erode(orange_segment, Dilation, cv::Mat(),cv::Point(-1,-1), 2);
		cv::dilate(Dilation, Dilation, cv::Mat(), cv::Point(-1,-1), 1);
		findContours(Dilation, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		for (unsigned int i = 0; i < contours.size(); i++)
		 {
			bound = boundingRect(contours.at(i));
		 }
		 target_position = Point(-((frame_width/2) - (bound.x + bound.width/2)) , ((frame_height/2) - (bound.y + bound.height/2)));
	}
	else if(input_colour == BOTH)
	{
		inRange(hsv_frame, cv::Scalar(GHL,GSL,GVL), cv::Scalar(GHU,GSU,GVU), green_segment);
		cv::erode(green_segment, Dilation, cv::Mat(),cv::Point(-1,-1), 2);
		cv::dilate(Dilation, Dilation, cv::Mat(), cv::Point(-1,-1), 1);
		findContours(Dilation, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		for (unsigned int i = 0; i < contours.size(); i++)
		 {
			bound = boundingRect(contours.at(i));
		 }
		 target_position = Point(-((frame_width/2) - (bound.x + bound.width/2)) +40, ((frame_height/2) - (bound.y + bound.height/2)));
	}
	else
		return 0;
	
	
	rectangle(frame, bound, Scalar(255, 50, 50), 2);
	//target_position = Point(-((frame_width/2) - (bound.x + bound.width/2)) , ((frame_height/2) - (bound.y + bound.height/2)));
	
	 
	
	//inRange(hsv_frame, cv::Scalar(H_MIN,S_MIN,V_MIN), cv::Scalar(H_MAX,S_MAX,V_MAX), green_segment);
	

	
	return target_position.x;

}
//drawContours(frame, contours, i, Scalar(255, 255, 255), cv::FILLED, 8, hierarchy);

