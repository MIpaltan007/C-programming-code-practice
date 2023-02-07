#include<stdio.h>
void main(){
    int units,customers;
    float charge;
    printf("Enter customers number and units\n");
    scanf("%d %d",&customers,&units);
    if(units<=200){
        charge=0.50*units;
    }
   else if(units<=400){
        charge=100+0.65*(units-200);
    }
    else if(units<=600){
        charge=230+0.80*(units-400);
    }
    else {
        charge=390+1.00*(units-600);
    }
    printf("Customers=%d,Charges=%.2f",customers,charge);
}