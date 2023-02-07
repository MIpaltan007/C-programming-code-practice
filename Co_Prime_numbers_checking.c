#include<stdio.h>
void main(){
    int a,b,i,min,flag;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++){
        if(a%i==0 && b%i==0)
        break;
    }
    if(i==min+1){
        printf("Co-prime numbers");
    }
    else{
        printf("Not Co-prime numbers");
    }
}
   