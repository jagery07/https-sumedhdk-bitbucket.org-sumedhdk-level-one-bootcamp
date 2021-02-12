//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
 int inp1()
 {
  int a;
  printf("Enter a number: \n");
  scanf("%d",&a);
  return a;
}

int inp2()
{
 int b;
 printf("enter a number \n");
 scanf("%d",&b);
 return b;
}

 int sum(int a,int b)
{
 int s;
 s=a+b;
}
 
int out(int a,int b,int c)
{
 printf("sum of %d and %d is : %d \n",a,b,c);
}

int main()
{
 int x,y,z;
 x=inp1();
 y=inp2();
 z=sum(x,y);
 out(x,y,z);
}
