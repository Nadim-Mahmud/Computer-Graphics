#include <stdio.h>
#include <graphics.h>
#include <math.h>

void bezierCurve(int x[4], int y[4]){
    double dx,dy,t,eps=.0005;
    for(t=0; t<=1 ; t+=eps){
        dx = pow((1-t),3)*x[0] + 3*pow((1-t),2)*t*x[1] + 3*(1-t)*pow(t,2)*x[2] + pow(t,3)*x[3];
        dy = pow((1-t),3)*y[0] + 3*pow((1-t),2)*t*y[1] + 3*(1-t)*pow(t,2)*y[2] + pow(t,3)*y[3];
        putpixel(dx,dy,15);
    }
    for(int i=0;i<4;i++){
        //setfillstyle(SOLID_FILL,RED);
        circle(x[i],y[i],4);
        //floodfill(x[i],y[i],RED);
    }
}

int main() {
    int gd = DETECT, gm = DETECT;
    initgraph (&gd, &gm, "");

    ///Four control points
    int x[4], y[4];
    x[0] = 10, y[0] = 10;
    x[1] = 100, y[1] = 150;
    x[2] = 150, y[2] = 300;
    x[3] = 400, y[3] = 100;

    bezierCurve(x,y);

    getch();
    closegraph();
    return 0;
}

