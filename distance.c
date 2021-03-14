//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

float inputx()
{
float x;
scanf ("%f",&x);
return x;
}

float inputy()
{
float y;
scanf ("%f",&y);
return y;
}

float find_distance(float x1,float y1,float x2,float y2 )
{
float distance;
distance = sqrt ((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
return distance;
}

float display(float distance)
{
printf ("The distance between two point is %f :",distance);
}

float main()
{
float x1,y1,x2,y2,distance;

printf ("Enter a value for x1:");
x1=inputx();

printf ("Enter a value for y1:");
y1=inputy();

printf ("Enter a value for x2:");
x2=inputx();

printf ("Enter a value for y2:");
y2=inputy();

distance = find_distance(x1,y1,x2,y2);
display(distance);

return 0;
}
