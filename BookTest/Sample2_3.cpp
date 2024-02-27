#include "Sample2_3.h"

void Sample2_3()
{
	Mat img;
	img = imread("lenna.bmp");

	if (img.empty())
	{
		cerr << "Image load failed!" << endl;
		return;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey();
}