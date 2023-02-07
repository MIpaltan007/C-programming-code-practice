#include<stdio.h>
void main(){
    int x,i;
    printf("Enter x");
    scanf("%d",&x);
    for(i=2;x>1;i++){
    while(x%i==0)
    {
       printf("%d ",i);
       x=x/i;
    }
    }
}