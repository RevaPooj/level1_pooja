//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
 float h,d,b;
 double vol;
 printf("Enter the dimensions of the tromboloid:\n");
  printf("h=");
  scanf("%f",&h);
  printf("\nd=");
  scanf("%f",&d);
  printf("\nb=");
  scanf("%f",&b);
  vol=((h*d)+d)/(3*b);
  printf("\n volume of a tromboloid with h=%f,d=%f and b=%f %lf",h,d,b,vol);
   
  return 0;
}
