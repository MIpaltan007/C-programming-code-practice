#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fibonacci(int n){
    if(n<=0)
    return -999;
    else if(n==1 || n==2)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    printf("\nNumber is %d",fibonacci(num));
}