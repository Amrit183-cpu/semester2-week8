
#define GRID_SIZE 21 // 21x21 grid for -10 to +10 range

/**
 * Structure to represent a 2D point
 */
typedef struct _point {
    int x;
    int y;
} Point;

/**
 * Structure to represent a grid
 */
typedef struct _grid {
    char **grid;
    int width;
    int height;
} Grid;

// Function prototypes
char **initialize_grid(void);
void draw_grid(char **grid);
void add_point(char **grid, Point p);

// TODO: Implement these functions
Point move_point(Point p, Point dp);
Point reflect_point(Point p, char axis);
Point swap_coords(Point p);

void free_grid()