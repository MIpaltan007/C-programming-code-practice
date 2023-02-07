#include<stdio.h>
void main(){
    int i=0,count=0;
    char name[30];
    printf("Enter Name");
    gets(name);
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("%d",count);
}