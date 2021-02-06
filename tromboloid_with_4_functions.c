//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
    // Write C code here
 float height(float h);
 float depth(float d);
 float breadth(float b);
 float volume(float h,float d,float b);
void main()
{ 
    float h,d,b,v;
    h=height(h);
    d=depth(d);
    b=breadth(b);
    v=volume(h,d,b);
    printf("volume of a tromboloid is=%f",v);
}
float height(float h)
       {
        printf("enter the value of h=");
        scanf("%f",&h);
            return h;
       }
float depth(float d)
      {
         printf("enter the value of d=");
         scanf("%f",&d);
             return d;
      }
float breadth(float b)
     {
         printf("enter the value of b=");
         scanf("%f",&b);
             return b;
     }
float volume(float h,float d,float b)
     {
         float v;
         v=((h*d*b)+d/b)/3;
        
         return v;
     }
     
