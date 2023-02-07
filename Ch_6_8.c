#include<stdio.h>
void main(){
    int item;
    double amount;
    printf("1 for Mill Cloth and 2 for Handloom items\n");
    printf("Enter amount and item number");
    scanf("%ld %d",&amount,&item);
    if(item!=1 && item!=2){
        printf("InValid Item");
    switch((int)amount){
        case 0 ... 100:
        amount*=(item==1)?1:0.95;
        break;
        case 101 ... 200:
        amount*=(item==1)?0.95:0.925;
        break;
        case 201 ... 300:
        amount*=(item==1)?0.925:0.9;
        break;
        default:
        amount*=(item==1)?0.9:0.85;
    }
}
printf("The discounted price is %ld",amount);
}