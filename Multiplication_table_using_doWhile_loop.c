#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter n");
    scanf("%d",&n);
    do{
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }while(i<=10);
}