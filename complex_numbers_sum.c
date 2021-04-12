//Write a program to compute sum of n fractions using structures and functions.#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
struct fractions
{
    int num;
    int den;
};

void input_n_fractions(int *n, struct fractions answer[10]);
struct fractions input_one_fraction(int n);
struct fractions add_n_fractions(int n, struct fractions f1[10]);
int great_com_den(int a,int b);
void print_n_fractions(int n,struct fractions f2[10],struct fractions final_answer);

int main()
{
    int i,n;
    struct fractions input_values[10],add_fraction_result;

    input_n_fractions(&n,input_values);
    add_fraction_result=add_n_fractions(n,input_values);
    print_n_fractions(n,input_values,add_fraction_result);
}

void input_n_fractions(int *n, struct fractions answer[10])
{
    int i;
    printf("Enter no of fractions:\n");
    scanf("%d",n);
    for(i=0;i<*n;i++)
    {
        answer[i]=input_one_fraction(i+1);
    }
}

struct fractions input_one_fraction(int k)
{
    struct fractions f1;
    printf("\nEnter numerator %d: ",k);
    scanf("%d",&f1.num);
    printf("\nEnter denominator %d: ",k);
    scanf("%d",&f1.den);
    return f1;
}

struct fractions add_n_fractions(int n, struct fractions f1[10])
{
    int i,gcd;
    struct fractions ans;
    ans.num=f1[0].num;
    ans.den=f1[0].den;
    for(i=1;i<n;i++)
    {
        ans.num=ans.num*f1[i].den+ans.den*f1[i].num;
        ans.den=ans.den*f1[i].den;
    }
    gcd=great_com_den(ans.num,ans.den);
    ans.num=ans.num/gcd;
    ans.den=ans.den/gcd;
    return ans;
}

int great_com_den(int a,int b)
{
    int i,gcd;
    gcd=1;
    for(i=2;i<=a && i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            gcd=i;
        }
    }
    return gcd;
}

void print_n_fractions(int n,struct fractions f2[10],struct fractions final_answer)
{
    int i;
    printf("%d/%d",f2[0].num,f2[0].den);
    for(i=1;i<n;i++)
    {
        printf("+%d/%d",f2[i].num,f2[i].den);
    }
    printf("= %d/%d",final_answer.num,final_answer.den);
}
