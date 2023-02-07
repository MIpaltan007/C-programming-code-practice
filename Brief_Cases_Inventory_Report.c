#include<stdio.h>
void main(){
    int i,quantity[4];
    float rate[4],value,total_value;
    char* code[4][4];
    for(i=0;i<4;i++){
        printf("Enter Code,Quantity and Rate");
        scanf("%s %d %f",code[i],&quantity[i],&rate[i]);
        }
    printf("     INVENTORY REPORT    \n");
    printf("-------------------------\n");
    printf("  Code  Quantity  Rate  Value  \n");
     for(i=0;i<4;i++){
        value=quantity[i]*rate[i];
        printf("%s  %d  %.2f  %f\n",code[i],quantity[i],rate[i],value);
        total_value+=value;
    }
    printf("-------------------------\n");
    printf("Total Value is %f\n",total_value);
    printf("-------------------------\n");   
}