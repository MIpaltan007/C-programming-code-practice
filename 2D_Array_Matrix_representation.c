#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter matrix elements a[%d][%d]=",i,j);
            scanf("%d\n",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}