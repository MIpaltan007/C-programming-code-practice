#include<stdio.h>
void main(){
    float sum,n,term;
    int i=1;
    printf("Enter n");
    scanf("%f",&n);
    term=1.0/n;
    while(i<=n){
        sum+=term;
        i++;

    }
    printf("Sum is %f\n",sum);
}