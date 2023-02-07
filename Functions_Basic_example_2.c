#include<stdio.h>
char fun();//Declaration
void main(){
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}
char fun()
{
    char c;
    printf("Enter character");
    scanf("%c",&c);
    return c;
}