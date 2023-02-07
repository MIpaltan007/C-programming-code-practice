#include<stdio.h>
void main(){
    int num,tens,hundreds;
    printf("Enter number");
    scanf("%d",&num);
    tens=(num/10)%10;
    hundreds=num/100;
    if(hundreds>0 && tens>0){
        printf("3 digit number");
    }
    else if(hundreds==0 && tens>0){
        printf("2 digit number");
    }
    else{
        printf("Neither 2 nor 3 digit number");
    }
}