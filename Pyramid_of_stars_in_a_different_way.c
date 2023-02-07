#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i==1 && j==1 || i==1 && j==2 || i==2 && j==1 || i==1 && j==4 || i==1 && j==5 || i==2 && j==5){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}