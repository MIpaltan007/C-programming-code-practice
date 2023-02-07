#include<stdio.h>
void main(){
    int n,fact=1,result=0;
    printf("Enter n");
    scanf("%d",&n);
    int q=n;
    while(q!=0){
        int rem=q%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    if(result==n){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
}