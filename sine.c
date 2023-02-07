#include<stdio.h>
#include<math.h>
#define PI 3.1415926
void main()
{
    double x;
    printf("Enter angles in radians:\n");
    scanf("%lf",&x);
    printf("\n sin(%.3lf)=%.3lf \n",x,sin(x));
}