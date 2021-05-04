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

void draw_circle(int xc,int yc,int rad)
{
int x = 0;
int y = rad;
float p = (5/4)-rad;
symmetry(x,y,xc,yc);
for(x=0;y>x;x++)
{
if(p<0)
p = p + 2*x + 3;
else
{
p = p + 2*(x-y) + 5;
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
draw_circle(xc,yc,r);
getch();
closegraph();
return 0;
}
