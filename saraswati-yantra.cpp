#include<iostream>
#include"graphics.h"
using namespace std;
int main()
{
    int gd = DETECT, gm;
	int x = 50;
	int y = 5;
	int start_angle = 155;
	int end_angle = 300;
	int radius = 40;
	initgraph(&gd, &gm, NULL);
	arc(x, y, start_angle, end_angle, radius);
	getch();
	closegraph();
	return 0;
}
