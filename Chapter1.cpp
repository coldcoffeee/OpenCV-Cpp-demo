#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;
/// <summary>
///					Importing Image
/// </summary>

/*
void main()
{
	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0);//to wait forever after showing image
}
*/

///////////////////// VIDEO ///////////////

void main()
{
	//since video is a series of images,
	//we open each image in  a while loop
	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);//or VideoCapture cap;cap.read(path)
	Mat img;
	while (true)
	{
		cap.read(img);//read each frame from cap into img
		//or cap>>img;
		if (img.empty())
		{
			cap.open(path);
			cap >> img;//or cap.read(img);
		}
		imshow("Image", img);
		waitKey(30);
	}
}