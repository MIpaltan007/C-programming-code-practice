#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    int f= FactorialOf(a);
    return 0;
}
int FactorialOf(int x)
{
    if(x==0 || x==1)
    return 1;
    else
    return (x*FactorialOf(x-1));
}
