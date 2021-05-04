#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


float theta;
int tx,ty;
int sx,sy;

void AskTranslate()
{
printf("\nEnter tx: ");
scanf("%d",&tx);
printf("\nEnter ty: ");
scanf("%d",&ty);

}

void translate()
{
setcolor(6);
outtextxy(240,10,"TRANSLATION");
outtextxy(238,20,"------------");
rectangle(100,150,150,100);
printf("\nAfter Translation");
rectangle(100+tx,150+ty,150+tx,100+ty);
}

void AskScale()
{

printf("\nEnter sx: ");
scanf("%d",&sx);
printf("\nEnter sy: ");
scanf("%d",&sy);

}

void scale()
{
setcolor(6);
outtextxy(240,10,"SCALING");
outtextxy(238,20,"--------");
rectangle(100,150,150,100);
printf("\nAfter Scaling");
rectangle(100*sx,150*sy,150*sx,100*sy);
}

void AskAngle()
{

printf("\nEnter the angle for rotation: ");
scanf("%f",&theta);
theta=theta*(3.14/180);
}

void rotate()
{
int refx,refy;
int x1,x2,x3,x4;
int y1,y2,y3,y4;
int ax1,ax2,ax3,ax4,ay1,ay2,ay3,ay4;
setcolor(6);
outtextxy(240,10,"ROTATE");
outtextxy(238,20,"-------");
refx=100;
refy=100;

x1=100;
y1=100;
x2=150;
y2=100;
x3=150;
y3=150;
x4=100;
y4=150;

ax1=refy+(x1-refx)*cos(theta)-(y1-refy)*sin(theta);
ay1=refy+(x1-refx)*sin(theta)+(y1-refy)*cos(theta);

ax2=refy+(x2-refx)*cos(theta)-(y2-refy)*sin(theta);
ay2=refy+(x2-refx)*sin(theta)+(y2-refy)*cos(theta);

ax3=refy+(x3-refx)*cos(theta)-(y3-refy)*sin(theta);
ay3=refy+(x3-refx)*sin(theta)+(y3-refy)*cos(theta);

ax4=refy+(x4-refx)*cos(theta)-(y4-refy)*sin(theta);
ay4=refy+(x4-refx)*sin(theta)+(y4-refy)*cos(theta);
rectangle(100,150,150,100);
line(ax1,ay1,ax2,ay2);
line(ax2,ay2,ax3,ay3);
line(ax3,ay3,ax4,ay4);
line(ax4,ay4,ax1,ay1);
}

int main()
{
int ch;
int gd=DETECT,gm;
/*initgraph(&gd,&gm,"");
setcolor(6);
rectangle(100,150,150,100);
delay(3000);
closegraph(); */

printf("---MENU---");
printf("\n 1)Translate\n 2)Scale\n 3)Rotate");
printf("\nEnter your choice: ");
scanf("%d",&ch);


switch(ch)
{
case 1: AskTranslate();
break;
case 2: AskScale();
break;
case 3: AskAngle();
break;
default: printf("you have enterd wrong choice");
break;
}

initgraph(&gd,&gm,"");
switch(ch)
{
case 1:
break;
case 2:

break;
case 3: rotate();
break;
default: printf("you have enterd wrong choice");
break;
}
getch();
closegraph();
return 0;
}
