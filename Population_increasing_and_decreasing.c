#include<stdio.h>
#include<math.h>
#define POPULATION 10000
void main(){
    float n;
    float new_population,rate;
    printf("Enter number of years\n");
    scanf("%f",&n);
    printf("Enter rate\n");
    scanf("%f",&rate);
    float RATE,Rate_Expansion;
    Rate_Expansion=(1-rate);
    RATE=pow(Rate_Expansion,n);
    new_population=POPULATION/RATE;
    printf("New Population is %.2f",new_population);

}