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
	VideoCapture cap(path);
}