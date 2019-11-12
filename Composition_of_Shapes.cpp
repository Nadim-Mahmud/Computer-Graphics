/// Composition of shapes

#include <graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int maxx = getmaxx();
    int maxy = getmaxy();
    int x2=maxx/2,x4=maxx/4,y2=maxy/2,y4=maxy/4;
    int g1,h1,g2,h2,rii;

    /// polygons co-ordinates
    int poly1[] = {20,y2,x2-x4,y2+y4,x2,y2,x2-x4,y2-y4,20,y2,x2-x4};
    int poly2[] = {x2,y2,x2+x4,y2+y4,maxx-20,y2,x2+x4,y2-y4,x2,y2};

    /// circles co-ordinates
    g1 = x2-x4;
    g2 = x2+x4;
    h1 = y2;
    h2 = y2;
    rii = 50;

    setfillstyle(XHATCH_FILL, RED);
    fillpoly(5, poly1);

    setfillstyle(XHATCH_FILL, RED);
    fillpoly(5, poly2);

    /// Outer circle
    setfillstyle(SOLID_FILL,BLACK);
    circle(g1,h1,rii);
    floodfill(g1,h1,15);

    setfillstyle(SOLID_FILL,BLACK);
    circle(g2,h2,rii);
    floodfill(g2,h2,15);

    ///Inner circle
    setfillstyle(SOLID_FILL,WHITE);
    circle(g1,h1,rii/3);
    floodfill(g1,h1,15);

    setfillstyle(SOLID_FILL,WHITE);
    circle(g2,h2,rii/3);
    floodfill(g2,h2,15);


    getch();
    closegraph();

return 0;
}
