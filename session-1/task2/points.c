
#include <stdio.h>
#include "points.h"
#include <math.h>

float distance( Point p, Point q ) {
    // implement distance here
    return sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
}

//reflect function
Point reflect( Point p, Point q ) {
    p.x = q.x;
    p.y = -(q.y);
    return (p);
}

int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));

    
    Point reflected = reflect(p1, p2); //store the result 
    printf("Reflected point is (%.1f, %.1f)\n", reflected.x, reflected.y);
    
    return 0;
}