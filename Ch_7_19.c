#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 && j==1||i==2 && j==1||i==1 && j==2||i==4 && j==1||i==5 && j==1||i==5 && j==2||i==5 && j==4||i==5 && j==5||i==4 && j==5||i==2 && j==5||i==1 && j==5||i==1 && j==4){
                printf(" ");
            }
            else if(i==1 && j==3||i==2 && j==2||i==3 && j==1||i==4 && j==2||i==5 && j==3||i==4 && j==4||i==3 && j==5||i==2 && j==4||i==1 && j==3){
                printf("1");
            }
            else if(i==2 && j==3||i==3 && j==2||i==4 && j==3||i==3 && j==4||i==2 && j==3){
                printf("2");
            }
            else{
                printf("3");
            }
        }
        printf("\n");
    }
}