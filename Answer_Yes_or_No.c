#include<stdio.h>
#include<ctype.h>
void main(){
    char answer;
    printf("Would you like to check again\n");
    printf("Type Y for yes and N for no\n");
    answer=getchar();
    if(answer=='y'||answer=='Y'){
        printf("Repeat from the beginning");
    }
    else{
        printf("Bye Bye");
    }
}