# Task 3: Coordinates and Shapes

You are provided with code defining a Point structure P(x,y) in the header file `shapes.h`

Source code implementation will be in file `shapes.c` 

## Implementation

Define a structure for a Rectangle, `typedef` this to name `Rectangle`

The `Rectangle` structure contains: 
- `Point p;` - the bottom left corner
- `float width;`
- `float height;`

Implement functions in the source code file for the following actions:
- create a Rectangle structure: `Rectangle makeRectangle( Point p, float width, float height );`
- area of the Rectangle: `float area( Rectangle r );`
- shift the Rectangle by a given amount: `void shiftRectangle( Rectangle *r, Point dp );`
- scale the Rectangle by a given factor: `void scaleRectangle( Rectangle *r, float scale );`

Definitions for these functions are provided in the header file.

## Question

Why do we need to:
- pass the structure for `area()`
need to pass the structure because it contains the height and width variables
- pass a pointer to the structure for `shiftRectangle()` and `scaleRectangle()`  
because we want to pass by reference which will replace the structs original variables values and not make a copy 

## Extension task

### Implement a function `rotate90()` 
- that returns a new `Rectangle` structure
rotated by 90 degrees clockwise, about the `Point p` at the bottom left corner.

`Rectangle rotate90( Rectangle r );`

Design tests for this function
- start with simple cases such as a Rectangle defined at the origin (0,0)
- consider cases where width and height are different
- consider cases where the Point P(x,y) is not at the origin
- rotate 4 times and verify the same Rectangle is returned

### Implement a function `corners()`
- that returns an array of 4 Point stuctures that define the Rectangle corners. 
- you will need to use `malloc()` and include `<stdlib.h>`

`Point *corners( Rectangle r );`