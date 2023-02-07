#include<stdio.h>
void main(){
    float num;
    float num_decimal_part;
    int a;
    printf("Enter Number");
    scanf("%f",&num);
    
    a=(int)num%10;
    printf("%d",a);
}