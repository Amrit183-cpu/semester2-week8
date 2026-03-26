
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(2.0,2.0);
    Point p2 = makePoint(3.0,2.0);
    Point p3 = makePoint(4.0,4.0);
    Point p4 = makePoint(1.0,1.0);
    
    // test your code by calling the functions and printing the output 
    Line l = makeLine(p2,p1);
    printf("%d \n",pointInLine(p1,l));

    return 0;
}