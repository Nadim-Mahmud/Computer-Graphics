#include <graphics.h>

void plotpixel(int g,int h,int x,int y){
    putpixel(g+x,h+y,15);
    putpixel(g-x,h+y,15);
    putpixel(g+x,h-y,15);
    putpixel(g-x,h-y,15);
    putpixel(g+y,h+x,15);
    putpixel(g-y,h+x,15);
    putpixel(g+y,h-x,15);
    putpixel(g-y,h-x,15);
}

void midpointCircle(int g,int h,int r){
    int p,x,y;
    p = 1-r;
    x = 0;
    y = r;
    while(x<y){
        x++;
        plotpixel(g,h,x,y);
        if(p<0){
            p += 2*x + 1;
        }
        else{
            y--;
            p += 2*x + 1 - 2*y;
        }
        delay(1);
    }
}



int main() {
    int gd=DETECT, gm=DETECT;
    initgraph(&gd,&gm,"");

    midpointCircle(250,250,100);

    getch();
    closegraph();
    return 0;
}

