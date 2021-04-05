//Write a program to find the sum of n different numbers using 4 functions
int main()
{
    struct variables values;
    int sum_add;
    values=input();
    sum_add=add_sum(values);
    output(values,sum_add);
}

struct variables input()
{
    struct variables var;
    int i;
    printf("Enter no of values:");
    scanf("%d",&var.n);
    for(i=0;i<var.n;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&var.a[i]);
    }
    return var;
}

int add_sum(struct variables var)
{
    int i;
    int sum=0;
    for(i=0;i<var.n;i++)
    {
        sum+=var.a[i];
    }
    return sum;
}

struct variables output(struct variables var,int sum)
{
    printf("\nSum of %d numbers is %d\n",var.n,sum);
}
