
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"


Point makePoint(float x, float y) {
    Point p; //make a point called p
    p.x = x; //def x
    p.y = y; //def y
    return p; //return parameters as Point p
}

Line makeLine(Point p1, Point p2) {
    Line l; //make a line called l
    l.p[0] = makePoint(p1.x, p1.y);
    l.p[1] = makePoint(p2.x, p2.y);
    return l;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle t; //make a line called l
    t.p[0] = makePoint(p1.x, p1.y);
    t.p[1] = makePoint(p2.x, p2.y);
    t.p[2] = makePoint(p3.x, p3.y);
    return t;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
float lineLength(Line l){
    return sqrt(pow(l.p[0].x-l.p[1].x,2)+pow(l.p[0].y-l.p[1].y,2)); //do pythagoras
};

float triangleArea(Triangle t){
    float area = (t.p[0].x * (t.p[1].y-t.p[2].y)) + (t.p[1].x * (t.p[2].y-t.p[0].y)) + (t.p[2].x * (t.p[0].y - t.p[1].y));
    if (area<0) { //check if area is negative
        area = -(area); //make area positive
    };
    area = 0.5 * area; //half the area
    return area;
}

bool samePoint (Point p1, Point p2) {
    Line l = makeLine(p1,p2); //make a line of 2 points
    if (fabs(lineLength(l))<1.0e-6){
        return true;
    } else {return false;}
}

bool pointInLine(Point p, Line l) {
    float p0_to_p = sqrt(pow(l.p[0].x-p.x,2)+pow(l.p[0].y-p.y,2)); //distance between p0 and p
    float p1_to_p = sqrt(pow(l.p[1].x-p.x,2)+pow(l.p[1].y-p.y,2)); //distance between p1 and p
    float diff_of_points = (lineLength(l)-(p0_to_p+p1_to_p));
    //printf("%f", diff_of_points); //this does work
    //check if Point p is on one of the edges
    if (samePoint(p, l.p[0])) {
        return true;
    } 
    else if (samePoint(p, l.p[1])) {
        return true;
    }
    //if distance of p and 2 ends matches up to length of l
    else if (fabs(diff_of_points)<1.0e-6){
        return true; 
    }
    else {return false;}
}

bool pointInTriangle(Point p, Triangle t) {
     //create lines between p and edges
     Line line0 = makeLine(p, t.p[0]);
     Line line1 = makeLine(p, t.p[1]);
     Line line2 = makeLine(p, t.p[2]);
     Line p0_p1 = makeLine(t.p[0], t.p[1]);
     Line p1_p2 = makeLine(t.p[1], t.p[2]);
     Line p2_p0 = makeLine(t.p[2], t.p[0]);
     //check if p is on the edges
     if (samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2])) {
        return true;
     }
     else if (lineLength(line0)<=lineLength(p0_p1)) {
        if (lineLength(line1)<=lineLength(p1_p2)) {
            if (lineLength(line2)<=lineLength(p2_p0)) {
                return true;
            }
        }
     }
     else {return false;}
}