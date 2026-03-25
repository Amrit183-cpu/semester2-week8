
// structure definitions

typedef struct _point {
    float x;
    float y;
} Point;

// define the Rectangle structure here

typedef struct _rectangle {
    Point p; //bottom left corner
    float width;
    float height;
} Rectangle;

// function headers - implement in shapes.c

Rectangle makeRectangle( Point p, float width, float height );
float area( Rectangle r );
void shiftRectangle( Rectangle *r, Point dp );
void scaleRectangle( Rectangle *r, float scale );

//Point *corners( Rectangle r );
//Rectangle rotate90( Rectangle r );