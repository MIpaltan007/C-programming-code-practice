#include<stdio.h>
#include<math.h>
void main(){
    int n,i,num,value,div;
    printf("Enter no of digits:\n");
    scanf("%d",&n);
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=n;i>=1;i--){
        div=pow(10,i);
        
        value=value%div;
    }
printf("Value=%d",value);
}