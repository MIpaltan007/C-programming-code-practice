#include<stdio.h>
void main(){
    int num,a,b,c,d,sum;
    printf("Enter number\n");
    scanf("%d",&num);
    a=num%10;
    b=num/100;
    c=num/10;
    d=c%10;
  sum=a+b+d;
  printf("Sum=%d",sum);  
}