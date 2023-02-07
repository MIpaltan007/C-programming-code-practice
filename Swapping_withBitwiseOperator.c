#include<stdio.h>
void main(){
    int x,y;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter y:\n");
    scanf("%d",&y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x=%d",x);
    printf("y=%d",y);
}