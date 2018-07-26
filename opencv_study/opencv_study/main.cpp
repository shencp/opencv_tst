/*
 ===========================================================================================
 File : IpcsMsgHandlerR3.cpp
 Description : test opencv
 Author : Touchdown Team
 Copyright : (c) 2018 Nokia Solution Networks
 CreateTime : 25:7:2018   13:48
 ===========================================================================================
*/

// #include <opencv2\opencv.hpp>
// int main() 
// {
// 	cv::mat img = cv::imread("c:\\cap.png"); //改成你自己的图片路径
// 	cv::imshow("test", img);
// 	cv::waitkey(0);
// }

//-------------------------------------------------------------------------------------------
/* @ open an image */
#include <iostream>
using namespace std;

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << " Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;
	}

	Mat image;
	image = imread(argv[1], CV_LOAD_IMAGE_UNCHANGED);	// Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	/* @can be ignored */
	namedWindow("shencp", CV_WINDOW_AUTOSIZE);// Create a window for display.
	imshow("shencp", image);                   // Show our image inside it.

	waitKey(0);											 // Wait for a keystroke in the window
	return 0;
}

//-------------------------------------------------------------------------------------------
/* @  */