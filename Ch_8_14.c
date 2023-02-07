#include<stdio.h>
void main(){
    int isbn[9],i,sum;
    printf("Enter isbn number");
    for(i=0;i<=9;i++){
        scanf("%d",&isbn[i]);
        if(i<=8){
            sum+=isbn[i]*(i+1);
        }
    }
    if(sum/11 == isbn[9]&& sum%11 ==0){
        printf("Valid ISBN code");
    }
    else{
        printf("Invalid ISBN code");
    }

}