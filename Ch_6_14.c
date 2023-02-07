#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n%1==0 && n%n==0){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
}