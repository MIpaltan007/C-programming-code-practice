#include<stdio.h>
typedef int integer;
typedef float floating;
typedef unsigned long ul;
void main(){
    
    integer number1,number2;
    floating average;
    printf("Enter number 1:\n");
    scanf("%d",&number1);
    printf("Enter number 2:\n");
    scanf("%d",&number2);
    average=(number1+number2)/2;
    printf("Average marks is %f\n",average);
}
