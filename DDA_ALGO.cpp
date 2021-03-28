/* DDA Algorithm*/
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
    int x1, y1, x2, y2;
    cout<<"Enter x1 and y1"<<endl;
    cin>>x1>>y1;

    cout<<"Enter x2 and y2"<<endl;
    cin>>x2>>y2;
    float x, y;
    x = float(x1);
    y = float(y1);
    float m;
    m = (float)((y2-y1)/(x2-x1));
    putpixel(x1,y1,WHITE);

    while(x < x2)
    {
        x = x + 1;
        y = y + m;
        putpixel(round(x), round(y),WHITE);
    }

    getch();
    return 0;
}




