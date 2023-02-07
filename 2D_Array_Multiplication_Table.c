#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j;
    int mat[11][11];
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            mat[i][j]=i*j;
        }
    }
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            printf("%5d",mat[i][j]);
            
        }
        printf("\n");
    }
}