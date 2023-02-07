#include<stdio.h>
void main(){
    int n,r,rows,space,ncr;
    printf("Enter rows");
    scanf("%d",&rows);
    for(n=0;n<rows;n++){
        for(space=1;space<rows-n;space++){
            printf(" ");
        }
        for(r=0;r<=n;r++)
        {
            if(n==0||r==0){
                ncr=1;
                printf("%d",ncr);
            }
            else{
                ncr=ncr*(n-r+1)/r;
                printf("%d",ncr);
            }
        }
        printf("\n");
    }
}