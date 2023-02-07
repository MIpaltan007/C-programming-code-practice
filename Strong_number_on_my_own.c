#include<stdio.h>
void main(){
    int q,i,fact=1,sum;
    printf("Enter number");
    scanf("%d",&q);
    while(q!=0){
        q=q%10;
        for(i=q%10;i>=1;i--){
            fact=fact*i;
        }
        sum+=fact;
        fact=1;
        q=q/10;
        
    }
    if(sum==q){
        printf("strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
}