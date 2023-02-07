#include<stdio.h>
#include<stdlib.h>
void main(){

int a=2,b,N,i,min;
printf("Enter N");
scanf("%d",&N);
while(N){
    for(b=2;b<=i;b++)
    {
        min=a>b?a:b;
        for(i=2;i<=min;i++){
            if(a%i==0 && b%i==0)
            break;
             if(i==min+1){
                 printf("\n (%d,%d)",a,b);
                 N--;
             }
             if(N==0)
             exit(0);
        }
       
        
    }
    a++;
    
}
}