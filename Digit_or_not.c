#include<stdio.h>
void main(){
    char character;
    printf("Enter Character:\n");
    scanf("%c",&character);
    if(isdigit(character)){
        printf("Character is digit");
    }
    else{
        printf("Not a digit");
    }
}