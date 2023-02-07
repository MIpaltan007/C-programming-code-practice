#include<stdio.h>
void main(){
    int i,n,sum;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0)
        sum+=i*i;
        
    }
    printf("Sum is %d",sum);
}