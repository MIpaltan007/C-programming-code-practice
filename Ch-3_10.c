#include<stdio.h>
float days,weeks,years;
void main(){
    printf("Enter number of days:\n");
    scanf("%f",&days);
    weeks=days/7;
    years=days/365;
    printf("Number of weeks=%f\n",weeks);
    printf("Number of years=%f\n",years);
}