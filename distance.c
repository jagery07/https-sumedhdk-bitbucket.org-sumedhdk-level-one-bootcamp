//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

void input_display(float x1, float y1,float x2, float y2);
float dist_pts(float *x1,float *y1, float *x2,float *y2);
void output_dist(float d);

int main()
{
    float x1,y1,x2,y2;
    float distance;
    printf("Enter x1 and y1 coordinates:\n");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2 and y2 coordinates:\n");
    scanf("%f %f",&x2,&y2);
    input_display(x1,y1,x2,y2);
    distance = dist_pts(&x1,&y1,&x2,&y2);
    output_dist(distance);
    return 0;
}

void input_display(float x1, float y1,float x2, float y2)
{
    printf("The coordinate points are:\n");
    printf("x1=%f, y1=%f\n",x1,y1);
    printf("x2=%f, y2=%f\n",x2,y2);
}

float dist_pts(float *x1,float *y1, float *x2,float *y2)
{
    float dist;
    dist = (sqrt)((x2-*x1)(x2-*x1)+(*y2-*y1)(*y2-*y1));
    return dist;
}

void output_dist(float dist)
{
    printf("Distance between two points are %f\n",dist);
}
