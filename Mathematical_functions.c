/*Sine function*/
/*#include<stdio.h>
#include<math.h>
#define PI 3.14159265
void main(){
    double x;
    printf("Enter x:\n");
    scanf("%lf",&x);
    printf("\n sin(%.3lf)=%.3lf",x,sin(x*PI/180));
}*/
 
/*Arc of cosine */
 #include<stdio.h>
#include<math.h>
#define PI 3.14159265
void main(){
    double x;
    printf("Enter x:\n");
    scanf("%lf",&x);
    printf("\n Arc cosine %lf is %lf\n",x,acos(x)*180/PI);
}