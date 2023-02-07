#include<stdio.h>
void main(){
    int i,j,n=1,rows;
    printf("Enter rows");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}