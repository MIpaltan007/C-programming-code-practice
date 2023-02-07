#include<stdio.h>
#include<stdlib.h>
int summation(int x)
{
    if(x<=0)
    return -999;
    else if(x==1)
    return 1;
    else
    return (x + summation(x-1));
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("\nSum=%d",summation(num));
    return 0;
}