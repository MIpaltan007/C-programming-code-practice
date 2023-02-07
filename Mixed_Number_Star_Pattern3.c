#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=3*n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i<=n){
                if(j>=2*n-i)
                printf("*");
                else
                printf(" ");
            }
            else if(i<=2*n){

            }
            else if(i<=3*n){

            }
        }
        printf("\n");
    }
}