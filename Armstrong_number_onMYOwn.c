#include<stdio.h>
void main(){
    int x,r,y,g,h;
    printf("Enter x\n");//Enter 125//
    scanf("%d",&x);
    r=x%10;//gives 5//
    y=x/10;//gives 12//
    g=y%10;//gives 2//
    h=y/10;//gives 1//
    if(x==r*r*r+g*g*g+h*h*h){
        printf("Armstrong number\n");
    }
    else{
        printf("Not a armstrong number\n");
    }
}