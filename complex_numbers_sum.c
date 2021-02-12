//Write a program to compute sum of n fractions using structures and functions.#include<stdio.h>
#include<math.h>
struct variables
{
    int x[10];
    int y[10];
};
struct fraction
{
    double z[10];
};
int sum_fraction(struct variables var,int num);
int main(void)
{
    struct variables var;
    struct fraction fr;
    int i,num;
    printf("How many fractions you want?:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
            printf("Enter numerator %d: ",i);
            scanf("%d",&var.x[i]);
            printf("\n");
            printf("Enter denominator %d: ",i);
            scanf("%d",&var.y[i]);
            printf("\n");
        }
    sum_fraction(var,num);
    return 0;
}

int sum_fraction(struct variables var,int num)
{
    int i;
    double add;
    add=0;
    struct fraction fr1;
    for(i=0;i<num;i++)
        {
            fr1.z[i]=(double)var.x[i]/(double)var.y[i];
        }
    for(i=0;i<num;i++)
    {
        add+=fr1.z[i];
    }
    printf("\nSum of %d fractions is %lf",num,add);
}
