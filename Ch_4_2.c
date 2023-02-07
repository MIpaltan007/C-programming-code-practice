#include<stdio.h>
void main(){
    float num;
    float num_decimal_part;
    int a;
    printf("Enter Number");
    scanf("%f",&num);
    if(a>0 && a<=9){
        printf("Invalid Number");
    }
    else if(a<=10 && a<=99){
        a=(int)num;
    printf("%d",a);
    }
    else{
        a=(int)num%100;
        printf("%d",a);
    }
    
}