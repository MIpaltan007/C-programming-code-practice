#include<stdio.h>
void main(){
    float angle1,angle2,angle3,sum;
    printf("Enter angle 1:\n");
    scanf("%f",&angle1);
    printf("Enter angle 2:\n");
    scanf("%f",&angle2);
    sum=angle1+angle2;
    angle3=180-sum;
    printf("Angle 3 is %f",angle3);
}