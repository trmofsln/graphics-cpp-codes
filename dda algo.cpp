#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
 int x1,y1,x2,y2,i;
 float x,y,xinc,yinc,steps;
 int gd=DETECT,gm;
 printf("Enter first point:");
 scanf("%d%d",&x1,&y1);
 printf("Enter second point:");
 scanf("%d%d",&x2,&y2);
 initgraph(&gd,&gm,"");
 if(abs(x2-x1 )>abs(y2-y1))
    steps=abs(x2-x1);
 else
    steps=abs(y2-y1);
 xinc=(x2-x1)/steps;
 yinc=(y2-y1)/steps;
 x=x1;
 y=y1;
 for(i=1;i<=steps;i++)
 {
   putpixel(x,y,WHITE);
   x=x+xinc;
   y=y+yinc;
 }
 getch();
 closegraph();
 return 0;
}
