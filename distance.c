//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

void display(float a1, float b1,float a2, float b2);
float points_distance(float *a1,float *b1, float *a2,float *b2);
void output(float d);

int main()
{
    float a1,b1,a2,b2;
    float distance;
    printf("Enter the coordinates for x1 and y1:\n");
    scanf("%f %f",&a1,&b1);
    printf("Enter the coordinates for x2 and y2:\n");
    scanf("%f %f",&a2,&b2);
    display(a1,b1,a2,b2);
    distance = points_distance(&a1,&b1,&a2,&b2);
    output(distance);
    return 0;
}

void display(float a1, float b1,float a2, float b2)
{
    printf("The coordinate of points are:\n");
    printf("x1=%f, y1=%f\n",a1,b1);
    printf("x2=%f, y2=%f\n",a2,b2);
}

float points_distance(float *a1,float *b1, float *a2,float *b2)
{
    float d;
    d = (sqrt)((*a2-*a1)(*a2-*a1)+(*b2-*b1)(*b2-*b1));
    return d;
}

void output(float d)
{
    printf("Distance between the two points are %f\n",d);
}
