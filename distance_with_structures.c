//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
int main()
{
 int i,n,arr[100], sum=0 ;
 printf("Enter size of array");
 scanf("%d",&n);
 printf("Enter element to be added");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{ 
 sum=sum+arr[i];
}

printf("Sum of numbers are:%d  \n",sum);

}
