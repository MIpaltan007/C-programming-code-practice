#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("Enter n");
    scanf("%d",&n);
    k=n*(n+1)/2;
    for(i=n;i>=0;i--){
        for(j=1;j<=i;j++){
            printf("%d ",k--);
        }
        printf("\n");
    }
}