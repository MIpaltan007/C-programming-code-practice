#include<stdio.h>
void main()
{
    double dist,time,speed;
    printf("Enter distance travelled in metres:\n");
    scanf("%lf",&dist);
    printf("Enter time taken in seconds:\n");
    scanf("%lf",&time);
    speed=(float)dist/time;
    printf("Speed is %lf",speed);
}