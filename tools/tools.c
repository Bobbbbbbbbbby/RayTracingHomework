#include "tools.h"
#include <math.h>

void normalize(direction_t* direction)
{
    float x = direction->x;
    float y = direction->y;
    float z = direction->z;

    float lengthSquare = x * x + y * y + z * z;
    float length = sqrtf(lengthSquare);

    direction->x = x / length;
    direction->y = y / length;
    direction->z = z / length;
}

void setColor(int x, int y, unsigned char r, unsigned char g, unsigned char b)
{
    int colorIdx = (y * WIDTH + x) * 3;
    image[colorIdx++] = r;
    image[colorIdx++] = g;
    image[colorIdx++] = b;
}

void imageOutput()
{
    
}