#include<stdio.h>
#include<stdlib.h>
void MaxDigits(int num)
{
    if(num>99 || num<10)
    printf("Not a 2 digit number\n");
    else{
        if(num%10 > num/10)
        printf("Max=%d\n",num%10);
        else
        printf("Max=%d\n",num/10);
    }
}
int main()
{
    int x;
    printf("Enter number");
    scanf("%d",&x);
    MaxDigits(x);
    return 0;
}