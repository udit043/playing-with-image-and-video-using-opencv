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
	
	double fps=0;int i=0;int ip=0;int pk=0;int yup;
   char t1[80],t2[80],t3[80],t4[80],t5[80],t6[80],t7[80],t8[80],t9[80],t10[80];
   char t11[80],t12[80],t13[80],t14[80],t15[80],t16[80],t17[80],t18[80],t19[80],t20[80];
	for(yup=0;yup<80;yup++)
	{
		t1[yup]=NULL;
		t2[yup]=NULL;
		t3[yup]=NULL;
		t4[yup]=NULL;
		t5[yup]=NULL;
		t6[yup]=NULL;
		t7[yup]=NULL;
		t8[yup]=NULL;
		t9[yup]=NULL;
		t10[yup]=NULL;
		t11[yup]=NULL;
		t12[yup]=NULL;
		t13[yup]=NULL;
		t14[yup]=NULL;
		t15[yup]=NULL;
		t16[yup]=NULL;
		t17[yup]=NULL;
		t18[yup]=NULL;
		t19[yup]=NULL;
		t20[yup]=NULL;
	}
	//VideoCapture::get(CV_CAP_PROP_BRIGHTNESS) & VideoCapture::get(CV_CAP_PROP_CONTRAST)
	cvNamedWindow( "Movie", CV_WINDOW_AUTOSIZE );
	CvCapture* capture = cvCreateFileCapture("s.mkv");
	IplImage* frame;
   fps=cvGetCaptureProperty(capture, CV_CAP_PROP_FPS);
   cout<<fps<<endl;
   fps=fps+10.6990;
   char acline[80];int nl;
   FILE *p;
   p=fopen("teacher.txt","r");
   if(p==NULL) {system("cls");printf("\n                           File is missing\n");printf("                Press any key to go back to Admin menu\n");getch();}
   fseek(p,0,SEEK_SET);
   while (!feof(p))
   {
      for(nl=0;nl<80;nl++)
      acline[nl]=NULL;
      fgets(acline,80,p);
      if(!(strlen(acline)>8)) { }
      else
      {

			      if(ip==0){for(yup=0;yup<(strlen(acline)-1);yup++){t1[yup]=acline[yup];}t1[strlen(acline)]='\0';}//cout<<endl<<t1<<" "<<strlen(acline)<<" "<<strlen(t1)<<" "<<ip<<endl;}
			 else if(ip==1){for(yup=0;yup<(strlen(acline)-1);yup++){t2[yup]=acline[yup];}t2[strlen(acline)]='\0';}//cout<<t2<<" "<<strlen(acline)<<" "<<strlen(t2)<<" "<<ip<<endl;}
			 else if(ip==2){for(yup=0;yup<(strlen(acline)-1);yup++){t3[yup]=acline[yup];}t3[strlen(acline)]='\0';}//cout<<t3<<" "<<strlen(acline)<<" "<<strlen(t3)<<" "<<ip<<endl;}
			 else if(ip==3){for(yup=0;yup<(strlen(acline)-1);yup++){t4[yup]=acline[yup];}t4[strlen(acline)]='\0';}//cout<<t4<<" "<<strlen(acline)<<" "<<strlen(t4)<<" "<<ip<<endl;}
			 else if(ip==4){for(yup=0;yup<(strlen(acline)-1);yup++){t5[yup]=acline[yup];}t5[strlen(acline)]='\0';}//cout<<t5<<" "<<strlen(acline)<<" "<<strlen(t5)<<" "<<ip<<endl;}
			 else if(ip==5){for(yup=0;yup<(strlen(acline)-1);yup++){t6[yup]=acline[yup];}t6[strlen(acline)]='\0';}//cout<<t6<<" "<<strlen(acline)<<" "<<strlen(t6)<<" "<<ip<<endl;}
			 else if(ip==6){for(yup=0;yup<(strlen(acline)-1);yup++){t7[yup]=acline[yup];}t7[strlen(acline)]='\0';}//cout<<t7<<" "<<strlen(acline)<<" "<<strlen(t7)<<" "<<ip<<endl;}
			 else if(ip==7){for(yup=0;yup<(strlen(acline)-1);yup++){t8[yup]=acline[yup];}t8[strlen(acline)]='\0';}//cout<<t8<<" "<<strlen(acline)<<" "<<strlen(t8)<<" "<<ip<<endl;}
			 else if(ip==8){for(yup=0;yup<(strlen(acline)-1);yup++){t9[yup]=acline[yup];}t9[strlen(acline)]='\0';}//cout<<t9<<" "<<strlen(acline)<<" "<<strlen(t9)<<" "<<ip<<endl;}
			 else if(ip==9){for(yup=0;yup<(strlen(acline)-1);yup++){t10[yup]=acline[yup];}t10[strlen(acline)]='\0';}//cout<<t10<<" "<<strlen(acline)<<" "<<strlen(t10)<<" "<<ip<<endl;}
			else if(ip==10){for(yup=0;yup<(strlen(acline)-1);yup++){t11[yup]=acline[yup];}t11[strlen(acline)]='\0';}//cout<<t11<<" "<<strlen(acline)<<" "<<strlen(t11)<<" "<<ip<<endl;}
			else if(ip==11){for(yup=0;yup<(strlen(acline)-1);yup++){t12[yup]=acline[yup];}t12[strlen(acline)]='\0';}//cout<<t12<<" "<<strlen(acline)<<" "<<strlen(t12)<<" "<<ip<<endl;}
			else if(ip==12){for(yup=0;yup<(strlen(acline)-1);yup++){t13[yup]=acline[yup];}t13[strlen(acline)]='\0';}//cout<<t13<<" "<<strlen(acline)<<" "<<strlen(t13)<<" "<<ip<<endl;}
			else if(ip==13){for(yup=0;yup<(strlen(acline)-1);yup++){t14[yup]=acline[yup];}t14[strlen(acline)]='\0';}//cout<<t14<<" "<<strlen(acline)<<" "<<strlen(t14)<<" "<<ip<<endl;}
			else if(ip==14){for(yup=0;yup<(strlen(acline)-1);yup++){t15[yup]=acline[yup];}t15[strlen(acline)]='\0';}//cout<<t15<<" "<<strlen(acline)<<" "<<strlen(t15)<<" "<<ip<<endl;}
			else if(ip==15){for(yup=0;yup<(strlen(acline)-1);yup++){t16[yup]=acline[yup];}t16[strlen(acline)]='\0';}//cout<<t16<<" "<<strlen(acline)<<" "<<strlen(t16)<<" "<<ip<<endl;}
			else if(ip==16){for(yup=0;yup<(strlen(acline)-1);yup++){t17[yup]=acline[yup];}t17[strlen(acline)]='\0';}//cout<<t17<<" "<<strlen(acline)<<" "<<strlen(t17)<<" "<<ip<<endl;}
			else if(ip==17){for(yup=0;yup<(strlen(acline)-1);yup++){t18[yup]=acline[yup];}t18[strlen(acline)]='\0';}//cout<<t18<<" "<<strlen(acline)<<" "<<strlen(t18)<<" "<<ip<<endl;}
			else if(ip==18){for(yup=0;yup<(strlen(acline)-1);yup++){t19[yup]=acline[yup];}t19[strlen(acline)]='\0';}//cout<<t19<<" "<<strlen(acline)<<" "<<strlen(t19)<<" "<<ip<<endl;}
			else if(ip==19){for(yup=0;yup<(strlen(acline)-1);yup++){t20[yup]=acline[yup];}t20[strlen(acline)]='\0';}//cout<<t20<<" "<<strlen(acline)<<" "<<strlen(t20)<<" "<<ip<<endl;}
			ip=ip+1;
      }
   }
   fclose(p);
	while(1)
	{
		i++;
		CvFont *font= new CvFont;
		cvInitFont(font,CV_FONT_VECTOR0,1.0f,2.6f,2,2,2);

		//char text[8]="UditR";
		
		frame = cvQueryFrame( capture );
		if( !frame ) break;
		pk=pk+40;
		if(ip>=1) {cvPutText(frame,t1,Point(20,10+pk+00),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<ip<<"ip > 2\n";}
		if(ip>=2) {cvPutText(frame,t2,Point(20,10+pk+30),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 3\n";}
		if(ip>=3) {cvPutText(frame,t3,Point(20,10+pk+60),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 4\n";}
		if(ip>=4) {cvPutText(frame,t4,Point(20,10+pk+90),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 5\n";}
		if(ip>=5) {cvPutText(frame,t5,Point(20,10+pk+120),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 6\n";}
		if(ip>=6) {cvPutText(frame,t6,Point(20,10+pk+150),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 7\n";}
		if(ip>=7) {cvPutText(frame,t7,Point(20,10+pk+180),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 8\n";}
		if(ip>=8) {cvPutText(frame,t8,Point(20,10+pk+210),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 9\n";}
		if(ip>=9) {cvPutText(frame,t9,Point(20,10+pk+240),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 10\n";}
		if(ip>=10) {cvPutText(frame,t10,Point(20,10+pk+270),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 11\n";}
		if(ip>=11) {cvPutText(frame,t11,Point(20,10+pk+300),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 12\n";}
		if(ip>=12) {cvPutText(frame,t12,Point(20,10+pk+330),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 13\n";}
		if(ip>=13) {cvPutText(frame,t13,Point(20,10+pk+360),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 14\n";}
		if(ip>=14) {cvPutText(frame,t14,Point(20,10+pk+390),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 15\n";}
		if(ip>=15) {cvPutText(frame,t15,Point(20,10+pk+420),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 16\n";}
		if(ip>=16) {cvPutText(frame,t16,Point(20,10+pk+450),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 17\n";}
		if(ip>=17) {cvPutText(frame,t17,Point(20,10+pk+480),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 18\n";}
		if(ip>=18) {cvPutText(frame,t18,Point(20,10+pk+510),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 19\n";}
		if(ip>=19) {cvPutText(frame,t19,Point(20,10+pk+540),font,CV_RGB(255,6,6));pk=pk+20;}//cout<<"ip > 20\n";}
		if(ip>=20) {cvPutText(frame,t20,Point(20,10+pk+570),font,CV_RGB(255,6,6));}
		cvShowImage( "Movie", frame );pk=0;
		char c = cvWaitKey(fps);//system("start Bubbles.scr");
		if( c == 27 ) break;//esc
	}
	cvReleaseCapture( &capture );
	cvDestroyWindow( "Movie" );
}
