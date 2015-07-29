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
   double fps=0;int i=0;
	 cvNamedWindow( "Movie", CV_WINDOW_NORMAL );
	 CvCapture* capture = cvCreateFileCapture("C:\\Dev-Cpp\\zzPograms\\cv\\s.mkv");
	 IplImage* frame;
   fps=cvGetCaptureProperty(capture, CV_CAP_PROP_FPS);
   cout<<fps;
	while(1)
	{
		i++;
		CvFont *font= new CvFont;
		cvInitFont(font,CV_FONT_VECTOR0,4.0f,8.0f,3,3,3);
		char text[8]="UditR";
		frame = cvQueryFrame( capture );
		if( !frame ) break;
		if((i>0)&&(i<200))
		{cvPutText(frame,text,Point(100,250),font,CV_RGB(255,6,6));}
		cvShowImage( "Movie", frame );
		char c = cvWaitKey(fps);
		if( c == 27 ) break; //esc
	}
	cvReleaseCapture( &capture );
	cvDestroyWindow( "Movie" );
}
