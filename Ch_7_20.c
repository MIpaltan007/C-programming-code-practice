#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            if(i==2 && j==1 || i==4 && j==1 || i==3 && j==2 || i==4 && j==3 ){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    
}