#include<stdio.h>
#include<math.h>
#define PI 3.14159265
void main(){
    double x,value,ret;
    x=0.5;
    value=180.0/PI;
    ret=acos(x)*value;
    printf("The arc cosine of %lf is %lf degrees",x,ret);
}