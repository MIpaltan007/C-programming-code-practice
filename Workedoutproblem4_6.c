#include<stdio.h>
void main(){
    float n,i,sum;
    printf("Enter number:\n");
    scanf("%f",&n);
    for(i=0;i<=n;i++){
        sum+=1.0/n;
    }
    printf("Sum is %f\n",sum);
}