#include<stdio.h>
void main(){
    int a,b,carry,sum;
    printf("Enter a and b");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("Sum=%d",sum);
}