//BOUNDARY ALGORITHM
#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>

using namespace std;

struct Point
{
	int x,y;
};
void drawPoly(Point ver[],int n)
{  for(int i=0;i<n;i++)
	  {
	      setcolor(BLUE);
	     line(ver[i].x,ver[i].y,ver[(i+1)%n].x,ver[(i+1)%n].y);
	   }
}
void boundaryFill4(int x, int y, int fill,int boundary)
{
	int current;
	current=getpixel(x,y);
	if((current!=boundary)&&(current!=fill))
	 {
	     putpixel(x,y,fill);
        delay(10);
	    boundaryFill4(x+1,y,fill,boundary);
	    boundaryFill4(x-1,y,fill,boundary);
	    boundaryFill4(x,y+1,fill,boundary);
	   boundaryFill4(x,y-1,fill,boundary);
	 }
}
void boundaryFill8(int x, int y, int fill,int boundary)
{
	int current;
	current=getpixel(x,y);
	if((current!=boundary)&&(current!=fill))
	 {
	     putpixel(x,y,fill);
	    delay(10);
	    boundaryFill8(x+1,y,fill,boundary);
	    boundaryFill8(x-1,y,fill,boundary);
	    boundaryFill8(x,y+1,fill,boundary);
	    boundaryFill8(x,y-1,fill,boundary);
	    boundaryFill8(x-1,y+1,fill,boundary);
	   boundaryFill8(x+1,y+1,fill,boundary);
	   boundaryFill8(x+1,y-1,fill,boundary);
	   boundaryFill8(x-1,y-1,fill,boundary);
	 }
}
int main()
	{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	cout<<"*************BOUNDARY ALGORITHM****************"<<endl;
	cout<<"Performed by Kuldeep Dwivedi A2305218477"<<endl;
	cout<<"And Akshay kumar Raghav A2305218445"<<endl;
	Point polygon[]={{100,100},{100,150},{150,150},{150,80},{170,80},{170,100}},seed={101,101};

	 int n=sizeof(polygon)/sizeof(polygon[0]);
	 drawPoly(polygon,n);
	 putpixel(150,100,BLACK);    //for testing boundary fill 4 and 8
	 putpixel(151,101,BLUE);     //second small semi-polygon not fill in 4connected
	 putpixel(149,99,BLUE);      //  get filled in 8 connected method
	 boundaryFill4(seed.x,seed.y,RED,BLUE);  //change 4 by 8 and check yourself
	 getch();
	 closegraph();
	 return 0;
}


