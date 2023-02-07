#include<stdio.h>
void main(){
    float Celcius,Fahrenheit;
    printf("Enter Celcius:\n");
    scanf("%f",&Celcius);
    Fahrenheit= Celcius*1.8 + 32;
    printf("Fahrenheit=%f",Fahrenheit);
}