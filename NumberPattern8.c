#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            if(j==1){
                printf("1");
            }
            else if(j==2){
                printf("2");
            }
            else if(j==3){
                printf("3");
            }
            else if(j==4){
                printf("4");
            }
            else if(j==5){
                printf("5");
            }
            else if(j==6){
                printf("6");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
/*  1
    12
    123
    1234
    12345
    123456  */