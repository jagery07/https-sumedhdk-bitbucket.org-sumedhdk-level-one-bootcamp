//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float fun1(float x1,float x2)
{
 return (x2-x1)*(x2-x1);
}

float fun2(float y1,float y2)
{
 return (y2-y1)*(y2-y1); 
}
 
float dist(float x1,float y1,float x2,float y2)
{
 return  sqrt(fun1(x1,x2)+fun2(y1,y2));
}

float out(float x1,float x2, float y1, float y2)
{
 printf("Distance between %f %f and %f %f is : %f\n",x1,x2,y1,y2,dist(x1,x2,y1,y2));
}

float main()
{
 float x1,y1,x2,y2;
 printf("Enter coordinate of point 1:\n");
 scanf("%f%f",&x1,&y1);
 printf("Enter coordinate of point 2: \n");
 scanf("%f%f",&x2,&y2);
 out(x1,y1,x2,y2);
}
