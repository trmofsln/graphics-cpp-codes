#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void disp(float x, float y, int xc, int yc)
{
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
}


int main()
{
int gd=DETECT,gm;
int rx,ry;
float x,y;
int xc,yc;
float p1,p2;
printf("Enter the center point :");
scanf("%d%d",&xc,&yc);
printf("Enter the value for Rx and Ry :");
scanf("%d%d",&rx,&ry);
initgraph(&gd,&gm, "");
x=0;
y=ry;
disp(x,y,xc,yc);
p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
while((2.0*ry*ry*x)<=(2.0*rx*rx*y))
{
x++;
if(p1<=0)
p1=p1+(2.0*ry*ry*x)+(ry*ry);
else
{
y--;
p1=p1+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(ry*ry);
}
disp(x,y,xc,yc);
x=-x;
disp(x,y,xc,yc);
x=-x;
}
x=rx;
y=0;
disp(x,y,xc,yc);
p2=(rx*rx)+2.0*(ry*ry*rx)+(ry*ry)/4;
while((2.0*ry*ry*x)>(2.0*rx*rx*y))
{
y++;
if(p2>0)
p2=p2+(rx*rx)-(2.0*rx*rx*y);
else
{
x--;
p2=p2+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(rx*rx);
}
disp(x,y,xc,yc);
y=-y;
disp(x,y,xc,yc);
y=-y;
}
getch();
closegraph();
return 0;
}
