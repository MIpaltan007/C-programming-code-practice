#include<stdio.h>
#include<math.h>
#define PI 3.1415926
void main()
{
    float x0,y0,x1,y1,radius,circumference;
    printf("Enter Centre Coordinates:\n");
    scanf("%f %f",&x0,&y0);
    printf("Enter circumference coordinators:\n");
    scanf("%f %f",&x1,&y1);
    float d2=(pow(x1-x0,2)+pow(y1-y0,2));
    radius=sqrt(d2);
    circumference=2*PI*radius;
    printf("Radius is %f\n",radius);
    printf("Circumference is %f\n",circumference);
}