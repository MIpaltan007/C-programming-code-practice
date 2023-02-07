#include<stdio.h>
void main(){
    int n,q,result=0,rem;
    printf("Enter n");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        rem=q%10;
        result=result*10 + rem;
        q=q/10;
    }
    if(result==n){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
   
   
}