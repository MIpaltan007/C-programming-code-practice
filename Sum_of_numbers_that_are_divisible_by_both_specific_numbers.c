#include<stdio.h>
void main(){
    int n,i,sum;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            sum+=i;
        }
    }
    printf("Sum=%d",sum);
}