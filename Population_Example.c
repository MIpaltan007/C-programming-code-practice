#include<stdio.h>
#define PRESENT_POPULATION 10000
void main(){
    int n,Population;
    printf("Enter years after which you want population");
    scanf("%d",&n);
    Population=PRESENT_POPULATION+PRESENT_POPULATION*0.1*n;
    printf("Future Population:%d\n",Population);
    if(n<0){
        Population=PRESENT_POPULATION-PRESENT_POPULATION*0.1*abs(n);
        printf("Past Population:%d\n",Population);
    }
}