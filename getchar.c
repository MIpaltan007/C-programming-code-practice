#include<stdio.h>
void main(){
    char answer;
    printf("Would you like to know my name\n");
    printf("Type Y for yes and N for no\n");
    answer=getchar();
    if(answer=='Y'||answer=='y'){
        printf("My name is BUSY BEE\n");
    }
    else{
        printf("You are good for nothing");
    }
}