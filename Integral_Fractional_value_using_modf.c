#include<stdio.h>
#include<math.h>
void main(){
    double x,fractpart,intpart;
    x=8.1234567;
    fractpart=modf(x,&intpart);
    printf("Fractional Part=%lf\n",fractpart);
    printf("Integral Part=%lf\n",intpart);
}