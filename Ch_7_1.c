#include<stdio.h>
void main(){
    int num,rem,reverse=0;
    printf("Enter number");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        reverse=reverse*10 + rem;
        num=num/10;
    }
    printf("Reverse Number=%d",reverse);
}