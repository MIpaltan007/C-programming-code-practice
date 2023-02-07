#include<stdio.h>
void main(){
    int a,b,c;
    float x;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    x=(float)a/(b-c);
    printf("The value of x is:%f\n",x);
    
}