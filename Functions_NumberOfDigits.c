#include<stdio.h>
#include<stdlib.h>
int NumberOfDigits(int num)
{
    if(num<=9)
    return 1;
    else
    return 1 + NumberOfDigits(num/10); 
}
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    printf("\nNumber of digits=%d",NumberOfDigits(n));
}