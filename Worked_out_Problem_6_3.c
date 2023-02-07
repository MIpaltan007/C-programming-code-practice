#include<stdio.h>
#include<math.h>
void main(){
    double x,sum,t;
    int n,i;
    t=1;
    sum=1;
    printf("Enter x and n\n");
    scanf("%lf %d",&x,&n);
    for(i=1;i<=n;i++){
        t=t*x/i;
        sum=sum+t;
        printf("%f\n",sum);
    }
}