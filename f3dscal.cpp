#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>


int main()
{
    int gd=DETECT,gm,c;
    int x1,x2,y1,y2,mx,my,depth;
    printf("\n\t\t3D Scaling\n\n");
    printf("\nEnter 1st top value(x1,y1):");
    scanf("%d%d",&x1,&y1);
    printf("Enter right bottom value(x2,y2):");
    scanf("%d%d",&x2,&y2);
    depth=(x2-x1)/4;
    mx=(x1+x2)/2;
    my=(y1+y2)/2;
    initgraph(&gd,&gm,"");
    bar3d(x1,y1,x2,y2,depth,1);
    delay(3000);
    closegraph();
    int x,y,a1,a2,b1,b2,dep;
    printf("\n\n Enter scaling Factors:");
    scanf("%d%d",&x,&y);
    a1=mx+(x1-mx)*x;
    a2=mx+(x2-mx)*x;
    b1=my+(y1-my)*y;
    b2=my+(y2-my)*y;
    dep=(a2-a1)/4;
    initgraph(&gd,&gm,"");
    //bar3d(a1,b1,a2,b2,dep,1);
    setcolor(5);
    bar3d(200,200,400,400,depth,1);
    delay(3000);
    closegraph();
    return 0;
}

