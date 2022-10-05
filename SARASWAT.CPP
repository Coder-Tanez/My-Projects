#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd = DETECT, gm;
	int x, y;
	int start_angle = -45;
	int end_angle = 180;
	int radius = 20;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	arc(x=50, y=50, start_angle, end_angle, radius);
	delay(50);
	arc(x=100, y=50, start_angle, end_angle, radius);
	delay(100);
	arc(x=150, y=50, start_angle, end_angle, radius);
	delay(150);
	arc(x=200, y=50, start_angle, end_angle, radius);
	delay(200);
	arc(x=250, y=50, start_angle, end_angle, radius);
	delay(250);
	arc(x=300, y=50, start_angle, end_angle, radius);
	delay(300);
	arc(x=350, y=50, start_angle, end_angle, radius);
	delay(350);
	line(70,55,30,150);
	delay(400);
	line(120,55,60,200);
	delay(450);
	line(170,55,90,250);
	delay(500);
	line(220,55,120,300);
	delay(550);
	line(270,55,150,350);
	delay(600);
	line(320,55,180,400);
	delay(650);
	line(370,55,210,450);
	delay(700);
	line(30,150,370,150);
	delay(750);
	line(60,200,350,200);
	delay(800);
	line(90,250,330,250);
	delay(850);
	line(120,300,310,300);
	delay(900);
	line(150,350,290,350);
	delay(950);
	line(180,400,270,400);
	delay(1000);
	line(210,450,250,450);
	delay(1050);
	line(15,25,250,450);
	delay(1100);
	line(65,25,270,400);
	delay(1150);
	line(115,25,290,350);
	delay(1200);
	line(165,25,310,300);
	delay(1250);
	line(220,25,330,250);
	delay(1300);
	line(270,25,350,200);
	delay(1350);
	line(320,25,370,150);
	delay(1400);
	outtextxy(380,190,"DHANES MEGHA ENGINEERING CLASSES");
	outtextxy(380,150,"CODE CREATED BY TANVEER");
	outtextxy(380,170,"DIPLOMA SECOND YEAR COMPUTER ENGG.");
	getch();
	closegraph();
}