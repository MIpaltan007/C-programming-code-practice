#include<stdio.h>
void main(){
    int n,numofInt=0,i;
    printf("Enter number you want to check\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            numofInt++;
        }
    }
    if(numofInt==2){
        printf("Prime Number");
    }
    else{
        printf("Not a prime number");
    }
}