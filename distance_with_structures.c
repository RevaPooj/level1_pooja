//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point{ int x,y;};
double calculate_distance(struct point a, struct point b)
{
   double distance;
   distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
   return distance;
}
int main()
{
   struct point a,b;
   printf("Enter the coordinates of point a:");
   scanf("%d""%d",&a.x,&a.y);
   printf("Enter the coordinates of point b:");
   scanf("%d""%d",&b.x,&b.y);
   printf("calculated distance is %lf\n",calculate_distance(a,b));

   return 0;
}
