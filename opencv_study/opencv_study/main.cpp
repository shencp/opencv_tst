/*
 ===========================================================================================
 File : IpcsMsgHandlerR3.cpp
 Description : test opencv
 Author : Touchdown Team
 Copyright : (c) 2018 Nokia Solution Networks
 CreateTime : 25:7:2018   13:48
 ===========================================================================================
*/

#include <opencv2\opencv.hpp>
int main() 
{
	cv::Mat img = cv::imread("C:\\cap.png"); //改成你自己的图片路径
	cv::imshow("test", img);
	cv::waitKey(0);
}
