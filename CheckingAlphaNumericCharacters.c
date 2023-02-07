#include<stdio.h>
#include<ctype.h>
void main(){
    char character;
    printf("Enter any character:\n");
    character=getchar();
    if(isalpha(character)>0){
      printf("Character is letter");
    }
    else
    if(isdigit(character)>0){

        printf("Character is digit");
    }
    else{
        printf("Character is not alphanumeric");
    }
}