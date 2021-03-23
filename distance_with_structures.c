//WAP to find the distance between two points using structures and 4 functions.#include<stdio.h>
#include<stdio.h>
#include<math.h>
struct values
{
    float a1;
    float b1;
    float a2;
    float b2;
};

struct values v;
float input_val();
double calc_dist();
float output_val(double b);

int main(void)
{
    input_val();
    calc_dist();
    return 0;
}

float input_val()
{
    printf("Enter x1: ");
    scanf("%f",&v.a1);
    printf("\nEnter y1: ");
    scanf("%f",&v.b1);
    printf("\nEnter x2: ");
    scanf("%f",&v.a2);
    printf("\nEnter y2: ");
    scanf("%f",&v.b2);
}

double calc_dist()
{
    double x,y;
    x=((v.a2-v.a1)(v.a2-v.a1))+((v.b2-v.b1)(v.b2-v.b1));
    y=sqrt(x);
    output_val(y);
}

float output_val(double y)
{
    printf("\nDistance b/w (%f,%f) and (%f,%f) is %lf\n",v.a1,v.b1,v.a2,v.b2,y);
}
