#include<stdio.h>
#include<string.h>
void main(){
    int count=0;
    char name[30];
    printf("Enter name");
    gets(name);
    count=strlen(name);
    printf("Count is %d",count);
}