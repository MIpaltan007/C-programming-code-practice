#include<stdio.h>
#include<math.h>
void main(){
    int n,i,value,div;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=3;i>=1;i--){
        div=pow(10,i);
        n=n%div;
        printf("Value=%d\n",n);
    }
    
}