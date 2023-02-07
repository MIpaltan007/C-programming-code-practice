#include<stdio.h>
#include<math.h>
void main(){
    char name[20];
    float units,Per_unit_charge,total_amount;
   
    printf("Enter name:\n");
    scanf("%s",name);
    printf("Enter units:\n");
    scanf("%f",&units);
    if(units<=200){
        Per_unit_charge=units*0.8;
    }
    else if(units<=300){
        Per_unit_charge=(units-200)*0.9 + 160;
    }
    else{
        Per_unit_charge=(units-300)*1.0 + 250;
    }
    total_amount=100 + Per_unit_charge;
    if(total_amount>400){
        total_amount=total_amount+0.15*total_amount;
    }
    printf("Name=%s,Units=%f,TotalAmount=%f",name,units,total_amount);

}