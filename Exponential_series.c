#include<stdio.h>
#include<math.h>
void main(){
    int i,n;
    float x,sum=1,term=1;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter x");
    scanf("%f",&x);
    for(i=1;i<=n;i++){
        term=term*x/i;
        sum=sum+term;
        printf("%f\n",sum);
    }
}