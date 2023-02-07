#include<stdio.h>
void main(){
    int i,n,sum;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum=%d",sum);
}