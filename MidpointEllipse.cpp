/* Midpoint Ellipse*/
#include<iostream>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

using namespace std;
void display (int xs1, int ys1, int x, int y);

void ellips1(int xs1,int ys1,int rx, int ry)
{
    int x,y;
    float d1,d2,dx,dy;
    x = 0;                  // take start position as (0,ry)
    y = ry;                 // finding decision parameter d1
    d1 = pow(ry,2) - (pow(rx,2) * ry) + (0.25 * pow(rx,2));
    dx = 2 * pow(ry,2) * x;
    dy = 2 * pow(rx,2) * y;
    do                         // region one
    {
        display(xs1,ys1,x,y);
        if(d1<0)
        {
            x++;
            dx = dx + (2 * (pow(ry,2)));
            d1 = d1 + dx +(pow(ry,2));
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * (pow(ry,2)));
            dy = dy - (2 * (pow(rx,2)));
            d1 = d1 + dx - dy + (pow(ry,2));
        }
    }while(dx<dy);      // change over condition for region-2

    d2 = (pow(ry,2)*pow((x+0.5),2)) + (pow(rx,2)*pow((y-1),2)) - (pow(rx,2)*pow(ry,2));
    do
    {
        display(xs1,ys1,x,y);
        if(d2>0)
        {
            x = x;
            y--;
            dy = dy - (2 * (pow(rx,2)));
            d2 = d2 - dy + pow(rx,2);
        }
        else
        {
            x++;
            y--;
            dy = dy - (2 * (pow(rx,2)));
            dx = dx + (2 * (pow(ry,2)));
            d2 = d2 +dx - dy + pow(rx,2);

        }
    }while(y>0);
}
void display(int xs,int ys,int x,int y)
{
    putpixel(xs+x,ys+y,WHITE); // plot points by using 4 point symmetry
    putpixel(xs-x,ys-y,WHITE);
    putpixel(xs+x,ys-y,WHITE);
    putpixel(xs-x,ys+y,WHITE);
}
int main(void)
{
    int xs1,ys1;
    float rx1,ry1;
    int gd = DETECT,gm;           // Initialise the graphics system
    initgraph(&gd,&gm,(char*)"");
    cout<<"Kuldeep Dwivedi"<<endl;
    cout<<"A2305218477"<<endl;
    cout<<"Mid-Point Ellipse"<<endl;
    cout<<"Enter the Center Co-ordinates\n";
    cin>>xs1>>ys1;
    cout<<"Enter the minor and major radius";
    cin>>rx1>>ry1;
    ellips1(xs1,ys1,rx1,ry1);
    getch();
    closegraph();
}


