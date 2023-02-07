#include<stdio.h>
void main(){
    int n,sum=0,digit;
    printf("Enter number of which you want sum of digits");
    scanf("%d",&n);
    while(n!=0){
       sum=sum+n%10;
       n=n/10;
       digit++;
    }
    printf("Sum of %d digit number is %d",digit,sum);
}