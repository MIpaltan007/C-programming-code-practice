#include<stdio.h>
char sum(void);
void main(){
    char s;
    s=sum();
    printf("sum =%c",s);
}
char sum()
{
    int a=5,b=7,sum;
    sum=a+b;
    return 'a','0','i';//This return will execute,the last value is returned
    return sum;//This will not execute as already a return value is executed
}