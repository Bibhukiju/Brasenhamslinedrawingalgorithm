#include<iostream>
#include<graphics.h>
using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

	dx=x1-x0;
	dy=y1-y0;

	x=x0;
	y=y0;

	p=2*dy-dx;

	for(int i =x0;i<=x1;i++)
	{
		if(p>=0)
		{
			putpixel(i,y,7);
			y=y+1;
			p+=2*dy-2*dx;
		}
		else
		{
			putpixel(i,y,7);
			p+=2*dy;
		}
	}
}

int main()
{
    int x0, x1, y0,y1;
    initwindow(1000,1000);
	cout<<"Enter co-ordinates of first point: ";
	cin>>x0>>y0;

	cout<<"Enter co-ordinates of second point: ";
	cin>>x1>>y1;
	drawline(x0, y0, x1, y1);
    getch();
	return 0;
}
