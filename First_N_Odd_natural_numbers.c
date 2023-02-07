#include<stdio.h>
void main(){
    int n,i;
    printf("Enter number of natural odd numbers you want to print");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}