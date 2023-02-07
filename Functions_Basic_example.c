#include<stdio.h>
void sum();//Declaration
void main(){
    sum();//Call
}
void sum(){  //definition
    int a,b,sum;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum is %d\n",sum);
}