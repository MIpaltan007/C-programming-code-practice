#include<stdio.h>
#include<stdlib.h>
int SumOfDigits(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10 + SumOfDigits(n/10));
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("\nSum of digits=%d",SumOfDigits(num));
    return 0;
}