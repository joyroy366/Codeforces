#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>

using namespace std;
int main()
{
  int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "");

    int x,y,x1,y1,x2,y2;
    x = getmaxx();
    y = getmaxy();


    line(0, y / 2, x, y / 2);
    line(x / 2, 0, x / 2, y);

    int xCenter = x / 2;
    int yCenter = y / 2;

    cout << "Enter coordinates (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates (x2, y2): ";
    cin >> x2 >> y2;


    int dx=x2-x1;
    int dy=y2-y1;
    float m=(y2-y1)/(x2-x1);
    x=x1;
    y=y1;
 cout<<"x"<<"\t"<<"y"<<"\t"<<"(x,y)"<<endl;;
 cout<<"--------------------------------"<<endl;;
    if(abs(m)<=1)
    {
        while(x<=x2)
        {
            cout<<x<<"\t"<<y<<"\t"<<"("<<x<<","<<y<<")"<<"\n";
            putpixel(x+xCenter,yCenter-y,WHITE);
            x++;
            y=y+m;
        }
    }
    else if(abs(m)>1)
    {
        while(y<=y2)
        {
           putpixel(x+xCenter,yCenter-y,WHITE);
            y++;
            x=x+(1/m);
        }
    }

    cout << "Screen resolution: " << x << "x" << y << endl;



     getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system.
    closegraph();

    return 0;
}
