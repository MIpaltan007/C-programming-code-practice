#include<stdio.h>
void main(){
    int binary,decimal=0,weight=1,rem;
    printf("Enter binary");
    scanf("%d\n",&binary);
    
    while(binary != 0){
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
    }
    printf("Decimal Equivalent is %d\n",decimal);

}