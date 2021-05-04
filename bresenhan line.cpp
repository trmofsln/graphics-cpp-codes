#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int x,y,x1,y1,x2,y2,p,dx,dy,k;
int gd=DETECT,gm;
printf("\nEnter the x-coordinate of the first point ::");
scanf("%d",&x1);
printf("\nEnter the y-coordinate of the first point ::");
scanf("%d",&y1);
printf("\nEnter the x-coordinate of the second point ::");
scanf("%d",&x2);
printf("\nEnter the y-coordinate of the second point ::");
scanf("%d",&y2);
initgraph(&gd,&gm, "");
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
p=(2*dy-dx);
for(k=0;k<dx;k++)
{
if(p<0)
{
putpixel(x+1,y,WHITE);
p=p+2*dy;
x=x+1;
}
else
{
putpixel(x+1,y+1,WHITE);
x=x+1;
y=y+1;
p=p+(2*dy)-(2*dx);
}
}
getch();
closegraph();
return 0;
}
