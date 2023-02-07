#include<stdio.h>
void main(){
    int i,j,spaces;
    for(i=1;i<=5;i++){
        for(spaces=1;spaces<=5-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=6;i<=9;i++){
        for(spaces=1;spaces<=i-5;spaces++){
            printf(" ");
        }
        for(j=1;j<=19-2*i;j++){
            printf("*");
        }
        printf("\n");
    }
}/*             *
               ***
              *****
             *******
            *********
             *******
              *****
               ***
                *       */   




  