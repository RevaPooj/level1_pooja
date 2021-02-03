//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
int n1,n2,sum=0;
  printf("enter two numbers\n:");
  printf("enter n1");
  scanf("%d,&n1);
  printf("enter n2");
  scanf("\n%d",&n2);
  sum = n1+n2;
  printf("the sum of two numbers is %d",sum);
  return 0;
}
