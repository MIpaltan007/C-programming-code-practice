#include<stdio.h>
void main(){
    int j,num;
    printf("Enter number");
    scanf("%d",&num);
    while(num>0){
        j=num%10;
        if(j!=0 && j!=1){
            printf("Not Binary");
            break;
        }
        num=num/10;
        if(num==0){
            printf("Binary");
        }
    }
}