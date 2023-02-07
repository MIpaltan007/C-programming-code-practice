#include<stdio.h>
void main(){

    int num;
    printf("Enter number");//Enters the number//
    scanf("%d",&num);
    int length;
    char output[60];//stores the number//
    length=sprintf(output,"%d",num);
    printf("Number is %s and its length is %d",output,length);
}