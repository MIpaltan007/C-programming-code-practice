#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}