#include<stdio.h>
#include<string.h>
void main(){
    char name[30];
    printf("Enter your name");
    gets(name);
    for(int i=0;i<=strlen(name);i++){
        printf("%d",name[i]);
    }
}