#include<stdio.h>
#define MAXLOAN 50000
void main(){
    long int loan1,loan2,loan3,sum23,sancloan;
    printf("Enter 2 previous loan amounts:\n");
    scanf("%ld %ld",&loan1,&loan2);
    printf("Enter requested loan amount:\n");
    scanf("%ld",&loan3);
    sum23=loan2+loan3;
    sancloan=(loan1>0)?0:((sum23>MAXLOAN)?MAXLOAN-loan2:loan3);
    printf("\n\n");
    printf("Loan Sanctioned is %ld",sancloan);
}