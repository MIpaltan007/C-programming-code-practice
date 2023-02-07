#include<stdio.h>
void main(){
    int i,n,sum;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        sum+=i;
        printf("Sum=%d\n",sum);
    }
}