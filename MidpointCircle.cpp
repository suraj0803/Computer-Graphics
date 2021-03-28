/* Mid point Circle*/
#include <iostream>
#include<graphics.h>

using namespace std;
void put_circle_pixel(int x, int y, int h, int k)
{
    putpixel(h + x, k + y, WHITE);
    putpixel(h - x, k + y, WHITE);
    putpixel(h - x, k - y, RED);
    putpixel(h + x, k - y, RED);
    putpixel(h + y, k + x, RED);
    putpixel(h - y, k + x, RED);
    putpixel(h - y, k - x, RED);
    putpixel(h + y, k - x, RED);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int r, p,x,y,h,k;

    cout<<"Kuldeep Dwivedi"<<endl;
    cout<<"A2305218477"<<endl;
    cout<<"Mid-Point Circle Algorithm"<<endl;
    cout<<"Enter the radius"<<endl;
    cin>>r;
    cout<<"Enter the co-ordinates of center"<<endl;
    cin>>h>>k;

    p = 1-r;
    x = 0;
    y = r;
    do
    {
        put_circle_pixel(x,y, h, k);
        if(p < 0)
        {
            x = x + 1;
            y = y;
            p = p+ 2*x +1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2*x - 2*y + 1;
        }
    }while(x < y);

    getch();
    return 0;
}




