#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,dist;
    printf("Enter x1:\n");
    scanf("%f",&x1);
    printf("Enter x2:\n");
    scanf("%f",&x2);
    printf("Enter y1:\n");
    scanf("%f",&y1);
    printf("Enter y2:\n");
    scanf("%f",&y2);
    float d2=fabs(pow(x2-x1,2)+pow(y2-y1,2));
    dist=sqrt(d2);

    printf("Distance  is %f",dist);



}