
#include<iostream>

#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>


using namespace cv;





int main()
{
	Mat srcImg;
	srcImg = imread("test1.png");

	int dstWidth = 100;  // cols
	int dstHeight = 600;  // rows

	Mat dstImg = Mat::ones(dstHeight, dstWidth, CV_8UC3);

	Point2f dstQuad[] = {
		Point2f(0, 0),                         // top left
		Point2f(dstWidth - 1, 0),              // top right
		Point2f(dstWidth - 1, dstHeight - 1),  // bottom right
		Point2f(0, dstHeight - 1),             // bottom left
	};

	Point2f srcQuad[] = {
	Point2f(srcImg.cols*0.05, srcImg.rows*0.7),  // top left
	Point2f(srcImg.cols*0.9, srcImg.rows*0.25),  // top right
	Point2f(srcImg.cols*0.8, srcImg.rows*0.9),  // bottom right
	Point2f(srcImg.cols*0.2, srcImg.rows*0.7),  // bottom left
	};




	Mat warp_mat = getPerspectiveTransform(srcQuad, dstQuad);
	std::cout << warp_mat;



	warpPerspective(srcImg, dstImg, warp_mat, dstImg.size());
	


	imshow("test", dstImg);

	waitKey(0);





	

	return 1;
}