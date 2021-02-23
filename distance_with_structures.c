//WAP to find the distance between two points using structures and 4 functions.#include<stdio.h>
#include<stdio.h>
#include<math.h>
struct values
{
    float x1;
    float y1;
    float x2;
    float y2;
};
struct values val;
float input_values();
double calc_dist();
float output_values(double b);

int main(void)
{
    //struct values val;
    input_values();
    calc_dist();
    return 0;
}

float input_values()
{
    printf("Enter x1: ");
    scanf("%f",&val.x1);
    printf("\nEnter y1: ");
    scanf("%f",&val.y1);
    printf("\nEnter x2: ");
    scanf("%f",&val.x2);
    printf("\nEnter y2: ");
    scanf("%f",&val.y2);
}

double calc_dist()
{
    double a,b;
    a=((val.x2-val.x1)(val.x2-val.x1))+((val.y2-val.y1)(val.y2-val.y1));
    b=sqrt(a);
    output_values(b);
}

float output_values(double b)
{
    printf("\nDistance between (%f,%f) and (%f,%f) is %lf\n",val.x1,val.y1,val.x2,val.y2,b);
}
