#include<stdio.h>
void main(){
    char ch;
    printf("Enter alphabets:\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
}