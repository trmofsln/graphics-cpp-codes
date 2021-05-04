#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>


int main()
{
int gd=DETECT,gm,c;
initgraph(&gd,&gm,"");
bar3d(100,100,200,200,50,1);
getch();
closegraph();
return 0;
}
