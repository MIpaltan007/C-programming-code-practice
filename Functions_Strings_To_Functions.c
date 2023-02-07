#include<stdio.h>
void display(char[]);
void main(){
    char str[]="Jenny";
    display(str);
}
void display(char str[])
{
    printf("String is %s",str);
}