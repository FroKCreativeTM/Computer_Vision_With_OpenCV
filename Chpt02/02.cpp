#include "opencv2/opencv.hpp"
#include <iostream>

int main()
{
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("9Alkxh89_400x400.jpg");

	if (img.empty())
	{
		std::cerr << "Image load failed!" << std::endl;
		return -1;
	}

	cv::namedWindow("Hello OpenCV");
	cv::imshow("Hello OpenCV", img);

	cv::waitKey();

	return 0;
}