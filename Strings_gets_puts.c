#include<stdio.h>
void main(){
    char name[30];
    printf("Enter Name:");
    scanf("%5s",&name);
    //gets(name);
    printf("%.5s",name);
    printf("%10.5s\n",name);
    puts(name);
    puts(name);
}