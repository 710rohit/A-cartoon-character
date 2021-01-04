#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int i;                                 //*****DORAEMON****//
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi\\");
setcolor(GREEN);
settextstyle(1,0,4);
outtextxy(250,200,"MADE BY ROHIT");
settextstyle(4,0,7);
outtextxy(200,250,"DORAEMON");
outtextxy(200,250,"DORAEMON");

arc(125,125,-45,225,80);    //HEAD//
arc(126,126,-45,225,80);
arc(125,125,225,-45,80);
arc(126,126,225,-45,80);
arc(125,135,225,-45,80);
arc(125,135,220,-40,80);
arc(125,125,-45,50,70);
arc(125,125,110,-40,70);

//******EYES AND NOSE*****//

circle(110,80,20);  circle(115,85,3);circle(115,84,3);circle(115,83,3);
circle(115,82,3); circle(115,81,3);circle(115,80,3);
circle(110,81,20);                 circle(145,85,3);circle(145,84,3);
circle(150,80,20);             circle(145,83,3);circle(145,82,3);circle(145,81,3);circle(145,80,3);
circle(150,81,20);
circle(130,100,8);
circle(130,101,8);


//******MOUTH AND BEARD*******//

line(130,108,130,150);
line(130,109,130,151);
line(88,150,183,150);
line(88,151,183,151);
arc(135,100,225,315,70);
arc(135,101,225,315,70);
arc(135,102,225,315,70);
line(110,110,70,100); line(140,110,180,100);
		       line(140,115,180,115);
line(110,115,70,115);  line(140,120,180,130);

line(110,120,70,130);
circle(125,225,10);
line(63,180,63,350);

//*****LEGS AND HANDS****//

     ellipse(80,365,0,360,35,20);
				 line(115,365,135,365);
line(190,180,190,350);               ellipse(170,365,0,360,35,20);
line(80,250,180,250);
arc(130,250,180,0,50);
line(63,180,20,240);    line(190,180,233,240);
			 line(190,210,218,260);
line(63,210,35,260);
circle(20,255,15);        circle(233,255,15);

getch();

}