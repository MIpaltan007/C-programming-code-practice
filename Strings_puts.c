#include<stdio.h>
void main(){
    char name[30];
    printf("Enter name");
    scanf("%s",name);
    printf("%s",name);
    printf("%.5s",name);
    printf("%10.5s",name);
    puts(name);
    puts(name);
    printf("%s",&name);
}