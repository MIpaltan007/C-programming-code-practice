#include<stdio.h>
void main(){
    float s,u,t,a,s1;
    printf("Enter initial velocity travelled\n");
    scanf("%f",&u);
    printf("Enter Time taken:\n");
    scanf("%f",&t);
    printf("Enter acceleration:\n");
    scanf("%f",&a);
    s1= (a*t*t)/2;
    s=u*t + s1;
    printf("Distance=%f",s);

}