#include<stdio.h>
void main(){
    int i,j,spaces;
    for(i=1;i<=5;i++){
        for(spaces=1;spaces<=i-1;spaces++){
            printf(" ");
        }
        for(j=1;j<=6-i;j++){
            printf("*");
        }
        printf("\n");
    }
}/*
      *****
       ****
        ***
         **
          *       */