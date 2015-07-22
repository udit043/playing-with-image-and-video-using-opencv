#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <coni.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
IplImage* img = 0;
img = cvLoadImage( "C:\\Dev-Cpp\\zzPograms\\cv\\152.jpg" );
cvNamedWindow( "152.jpg", CV_WND_PROP_ASPECTRATIO );
CvFont *font= new CvFont;
cvInitFont(font,CV_FONT_VECTOR0,1.0f,2.0f,2,2,2);
char text[50]="Enter your name";
char z;int j;
cvShowImage( "152.jpg", img );
char c = cvWaitKey(400.0);
cvPutText(img,text,Point(100,250),font,CV_RGB(255,6,6));
cvShowImage( "152.jpg", img );
cvWaitKey(0);
cvReleaseImage( &img );
cvDestroyWindow( "152.jpg" );
}
