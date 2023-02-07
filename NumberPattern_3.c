#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            if(j==1||j==3||j==5){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}
/* 1
   10
   101
   1010
   10101
   101010  */