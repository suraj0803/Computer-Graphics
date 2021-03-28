/* Rotation of a Triangle*/
#include <iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    cout<<"\t\t2D TRANSLATION"<<endl;
    cout<<"\tKuldeep Dwivedi A2305218477"<<endl;
    cout<<"Green- Before\n White - After"<<endl;
    int tri[3][2];
    float Tx, Ty;

    cout<<"Enter the co-ordinates of triangle"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Co-ordinate "<<(i+1)<<"\t";
        for(int j = 0; j < 2; j++)
            cin>>tri[i][j];
    }
    cout<<"Enter the value of Tx\t";
    cin>>Tx;
    cout<<"Enter the value of Ty\t";
    cin>>Ty;

    int arr[] = {tri[0][0],tri[0][1],tri[1][0],tri[1][1],tri[2][0],tri[2][1],tri[0][0],tri[0][1]};
    drawpoly(4,arr);

    int arr1[] = {tri[0][0]+Tx,tri[0][1] + Ty,tri[1][0]+Tx,tri[1][1]+Ty,tri[2][0]+Tx,tri[2][1]+Ty,tri[0][0]+Tx,tri[0][1]+Ty};
    setcolor(WHITE);
    drawpoly(4,arr1);
    getch();
    return 0;
}



