//WAP to find the distance between two points using structures and 4 functions.#include<stdio.h>
#include<math.h>
struct point
{
 float x,y;
};

float dist(struct point a,struct point b)
{
 float d;
 d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
 return d;
}

int main()
{
 struct point a,b;
 printf("enter the coordinate of point 1: \n");
 scanf("%f%f",&a.x,&a.y);
 printf("enter the coordinate of point 2: \n");
 scanf("%f%f",&b.x,&b.y);
 printf("distance between points is: %f",dist(a,b));
 }
