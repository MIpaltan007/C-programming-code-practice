#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=0;
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d",k);
                k=k+i-1;
            }
            else{
                printf(" ");
            }


        }
        printf("\n");
    }
}
/*  0
    01
    024
    0369
    0481216   */