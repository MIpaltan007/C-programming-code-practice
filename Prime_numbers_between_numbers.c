#include<stdio.h>
 void main(){
    int l,u,x,i;
    printf("Enter l and u");
    scanf("%d %d",&l,&u);
    for(x=l+1;x<=u-1;x++){
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
            if(i==x)
            printf("%d\n",x);
        
    }
 }