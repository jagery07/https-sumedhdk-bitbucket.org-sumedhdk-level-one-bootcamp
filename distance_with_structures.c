//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct point
{
   int x,y;
};
float dist(struct pointa,struct pointb)
{
   float distance;
   distance=sqrt((a.x-b.x)(a.x-b.x)+(a.y-b.y)(a.y-b.y));
   return distancce;
}
int main()
{
   struct pointa,pointb;
   printf("Enter the first coordinates=");
   scanf("%f%f",&a.x,&a.y);
   printf("Enter the second coordinates=");
   scanf("%f%f",&b.x,&b.y);
   printf("Distance between the two points=",dist(a,b));
   return 0;
}
