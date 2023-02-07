#include<stdio.h>
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("Sum is %d",s);
}
int sum()
{
    int a,b,sum;
    printf("Enter 2 values");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}