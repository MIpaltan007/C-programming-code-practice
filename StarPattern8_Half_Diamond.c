#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=6;i<=9;i++){
        for(j=1;j<=10-i;j++){
            printf("*");
        }
        printf("\n");
    }
}/*       *
          **
          ***
          ****
          *****
          ****
          ***
          **
          *        */