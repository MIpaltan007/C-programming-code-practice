/*
#include<stdio.h>
void main(){
    int a;
    a=1,2,3;
    printf("%d",a);
}
Assignment Operator is dominant on Comma operator,thus a=1 is printed */

#include<stdio.h>
void main(){
    int a;
    a=(4,2,1);
    printf("%d",a);
}
//Last operand(1) is printed when brackets are used//