#include<stdio.h>
#include<stdlib.h>
void main(){
    int mat[2][3]={{1,3,5},{2,4,6}};
    for(int i=0;i<2;i++)
    for(int j=0;j<3;j++)
    printf("Address of mat[%d][%d]=%lu\n",i,j,&mat[i][j]);
}
