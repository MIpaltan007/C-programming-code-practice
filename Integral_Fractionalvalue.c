#include<stdio.h>
void main()
{
    float num;
    printf("Enter number:\n");
    scanf("%f",&num);

    int num_integer=(int)num;
    float num_fractional=num-num_integer;
    printf("Integer part:%d,Fractional part:%f\n",num_integer,num_fractional);
}