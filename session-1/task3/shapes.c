
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = { .x=0, .y=0 };
    Rectangle r = makeRectangle(p, 4.0, 3.0);
    printf("Area: %.1f\n", area(r)); // should print 12.0
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r; //Rectangle called r is now made
    r.p = p;
    r.width = width;
    r.height = height;
    
    return r;
}

float area( Rectangle r ) {
    float a = r.height * r.width;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r-> p.x += dp.x;
    r-> p.y += dp.y;

    return; //do we need to return r
}

void scaleRectangle( Rectangle *r, float scale ) {
    r-> p.x *= scale;
    r-> p.y *= scale;
    r-> width *= scale;
    r-> height *= scale;
    return;
}
