#include<stdio.h>
void main(){
    int years;
    printf("Enter year");
    scanf("%d",&years);
    if(years%4==0 && years%400==0){
        printf("Leap Year");
    }
    else if(years%100==0){
        printf("Not a Leap year");
    }
    else{
        printf("Not a Leap year");
    }
}