// #include<stdio.h>
// #define ACCURACY 0.0001
// void main(){ 
//     int n,count=1,i,factorial;
//     float sum,terms,x;
//     printf("Enter power and factorial number\n");
//     scanf("%d",&n);
//     printf("Enter x\n");
//     scanf("%f",&x);
//     for(i=1;i<=n;i++){
//         terms=(float)pow(x,i)/(float)(n*factorial*(n-1));
//         sum=count+terms;
//         printf("Sum is %f",sum);
//     }
// }
#include<stdio.h>
#define ACCURACY 0.0001
void main(){
    int n,count;
    float term,sum,x;
    printf("Enter x\n");
    scanf("%f",&x);
    sum=term=count=n=1;
    while(n<=100){
        term=term*x/n;
        sum=sum+term;
        count=count+1;
        if(term<ACCURACY){
            n=999;
        }
        else{
            n=n+1;
        }
        printf("Terms=%d\n Sum=%f\n",count,sum);
    }
}