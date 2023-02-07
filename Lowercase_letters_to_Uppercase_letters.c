#include<stdio.h>
#include<ctype.h>
void main(){
    char alphabet;
    printf("Enter a alphabet:\n");
    putchar('\n');
    alphabet=getchar();
    if(islower(alphabet))
    putchar(toupper(alphabet));
    else
    putchar(tolower(alphabet));
}