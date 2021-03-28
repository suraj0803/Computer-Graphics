/* Scalling of a Triangle*/
#include <iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    cout<<"\t\t2D SCALING"<<endl;
    cout<<"\tKuldeep Dwivedi A2305218477"<<endl;

    int tri[3][2];
    float scaling[2][2] = {0};
    float Sx, Sy;

    cout<<"Enter the co-ordinates of triangle"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Co-ordinate "<<(i+1)<<"\t";
        for(int j = 0; j < 2; j++)
            cin>>tri[i][j];
    }

    cout<<"Enter the value of Sx\t";
    cin>>Sx;
    cout<<"Enter the value of Sy\t";
    cin>>Sy;
    scaling[0][0] = Sx;
    scaling[1][1] = Sy;

    int new_tri[3][2] = {0};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                new_tri[i][j] += tri[i][k]*scaling[k][j];
            }
        }
    }

    int arr[] = {tri[0][0],tri[0][1],tri[1][0],tri[1][1],tri[2][0],tri[2][1],tri[0][0],tri[0][1]};
    drawpoly(4,arr);

    int arr1[] = {new_tri[0][0],new_tri[0][1],new_tri[1][0],
new_tri[1][1],new_tri[2][0],new_tri[2][1],new_tri[0][0],new_tri[0][1]};
    drawpoly(4,arr1);
    getch();
    return 0;
}

