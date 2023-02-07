// #include<stdio.h>
// void main(){
//     int n,r,c,sum=0,temp;
//     printf("Enter n:");
//     scanf("%d",&n);
//     temp=n;
//     while(n>0){
//     r=n%10;
//     c=r*r*r;
//     sum=sum+c;
//     n=n/10;
//     n=temp;
//     if(n==sum){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not Armstrong");
//     }
// }
// }
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,t,arm;
    for(i=1;i<=1000;i++)
    {
     arm=0;
    }
    for(t=i;t!=0;t=t/10){
        arm=arm+(t%10)*(t%10)*(t%10);
    }
    if(arm==i){
        printf("%d\n",arm);
    }
    return 1;
}