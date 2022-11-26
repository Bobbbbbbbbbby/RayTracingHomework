#ifndef __TYPES_H
#define __TYPES_H

#define WIDTH   1280
#define HEIGHT  720
#define DEPTH   640
#define INFINITY    -1

typedef struct point
{
    float x;
    float y;
    float z;
} point_t;

// direction is normalized
typedef struct direction
{
    float x;
    float y;
    float z;
} direction_t;

typedef struct color
{
    float r;
    float g;
    float b;
} color_t;

// ray includes point and direction
typedef struct ray
{
    point_t point;
    direction_t direction;
} ray_t;

// pixel at (x, y), index is ((y * WIDTH) + x) + 1/2/3
// 1 means Red | 2 meas Green | 3 mean Blue
extern unsigned char image[WIDTH * HEIGHT * 3];

#endif