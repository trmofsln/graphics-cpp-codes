#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void symmetry(int x,int y,int xc,int yc)
{
putpixel(xc+x,yc-y,GREEN); //For pixel (x,y)
putpixel(xc+y,yc-x, GREEN); //For pixel (y,x)
putpixel(xc+y,yc+x, GREEN); //For pixel (y,-x)
putpixel(xc+x,yc+y, GREEN); //For pixel (x,-y)
putpixel(xc-x,yc+y, GREEN); //For pixel (-x,-y)
putpixel(xc-y,yc+x, GREEN); //For pixel (-y,-x)
putpixel(xc-y,yc-x, GREEN); //For pixel (-y,x)
putpixel(xc-x,yc-y, GREEN); //For pixel (-x,y)
}

void bresenhan_circle(int xc,int yc,int rad)
{
int x = 0;
int y = rad;
int d = 3 - (2*rad);
symmetry(x,y,xc,yc);
for(x=0;y>x;x++)
{
if(d <= 0)
d= d + (4*x) + 6;
else
{
d = d + 4*(x-y) + 10;
y--;
}
symmetry(x,y,xc,yc);
}
}

int main()
{
int gd=DETECT,gm;
int x,y,xc,yc,r,p;
printf("Enter the center of the circle:\n");
printf("Xc =");
scanf("%d",&xc);
printf("Yc =");
scanf("%d",&yc);
printf("Enter the radius of the circle :");
scanf("%d",&r);
initgraph(&gd,&gm, "");
bresenhan_circle(xc,yc,r);
getch();
closegraph();
return 0;
}

