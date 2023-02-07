#include<stdio.h>
void main(){
    int days,months,Days;
    printf("Enter days:\n");
    scanf("%d",&days);
    months=days/30;
    Days=days%30;
    printf("Months=%d,Days=%d",months,Days);

}