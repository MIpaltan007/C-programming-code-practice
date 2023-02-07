#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if((a%b==0 || b%a==0) || (b%c==0 || c%b==0) || (a%c==0 || c%a==0)){
    printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}