#include<stdio.h>
void main(){
    int a[3][3],i,j,SR,SC;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        SR=0,SC=0;
        for(j=0;j<3;j++){
            SR= SR + a[i][j];
            SC= SC + a[j][i];
        }
       printf("Row Sum is %d and Column Sum is %d",SR,SC);
    }
    
}