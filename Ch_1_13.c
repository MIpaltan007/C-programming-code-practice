#include<stdio.h>
void main(){
    int i,n,sum;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i*(i+1);
    }
    printf("Sum is %d",sum);
}