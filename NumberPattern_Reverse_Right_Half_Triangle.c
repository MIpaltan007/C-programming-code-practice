#include<stdio.h>
int i,j,n;
void main(){ 
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<(n-i);j++){;
        printf("%d ",j+1);
    }
    printf("\n");
    }
}

/* 1 2 3 
   1 2 
   1 */