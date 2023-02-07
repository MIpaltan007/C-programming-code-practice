#include<stdio.h>
void main(){
    int year,period;
    float value,amount,interest;
    year=1;
    printf("Enter amount,interest and period");
    scanf("%f %f %d",&amount,&interest,&period);
    printf("\n");
    while(year<=period){
        value=amount + amount*interest;
        printf("%2d  Rs%8.2f\n",year,value);
        amount=value;
        year=year+1;
    }
}