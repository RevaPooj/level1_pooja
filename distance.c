//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
void input();
void output(float d);
void dis(float x1,float y1,float x2,float y2);

void input()
{
    float x1,y1,x2,y2;
     
     printf("enter the value of x1");
     scanf("%f",&x1);
         
     printf("enter the value of y1");
     scanf("%f",&y1);
       
     printf("enter the value of x2");
     scanf("%f",&x2);
       
     printf("enter the value of y2");
     scanf("%f",&y2);
    dis(x1,y1,x2,y2);
}
void dis(float x1,float y1,float x2,float y2)
{
    float disti;
      disti=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
         output(disti);
}
void output(float d)
{
    printf("the distance between two points is:%f",d);
}
int main()
{
    input();
    return 0;
}
