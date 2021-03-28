/*Bresenham's Algo*/
#include <iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    cout<<"Kuldeep Dwivedi"<<endl;
    cout<<"A2305218477"<<endl;
    int x1,y1,x2,y2;
    cout<<"Enter x1 and y1"<<endl;
    cin>>x1>>y1;
    cout<<"Enter x2 and y2"<<endl;
    cin>>x2>>y2;
    int d;
    int exch = 0;
    int x_diff = (x2-x1);
    int y_diff = (y2-y1);
    int s1 = (x2-x1)/abs(x2-x1);
    int s2 = (y2-y1)/abs(y2-y1);
    if(y_diff > x_diff)
    {
        int temp = x_diff;
        x_diff = y_diff;
        y_diff = temp;
        exch = 1;
    }
    else
        exch = 0;
    d = 2*y_diff - x_diff;
    int x = x1;
    int y = y1;
    for(int i = 1; i < x_diff; i++)
    {
        putpixel(x,y,WHITE);
        while(d >= 0)
        {
            if(exch == 1)
                x = x + s1;
            else
                y = y + s2;
            d = d - (2*x_diff);
        }
        if(exch == 1)
            y = y + s2;
        else
            x = x + s1;
        d = d + (2*y_diff);
    }
    getch();
    return 0;
}





