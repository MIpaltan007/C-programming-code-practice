#include<stdio.h>
void main(){
    int i,num,rem,sum=0;
    printf("Enter number");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        rem=num%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
}