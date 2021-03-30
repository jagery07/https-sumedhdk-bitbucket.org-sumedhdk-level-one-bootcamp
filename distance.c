//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordinates
 {
   float x, y;
};
double funcdist(struct coordinates a, struct coordinates b)
{
    float d;
    d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return d;
}
int main()
{
    float d;
    struct coordinates a, b;
    printf("Enter coordinates of point a(x1,y1): ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter coordinates of point b(x2,y2): ");
    scanf("%f %f", &b.x, &b.y);
    d=funcdist(a, b);
    printf("Distance between a and b: %f\n", d);
    return 0;
}
