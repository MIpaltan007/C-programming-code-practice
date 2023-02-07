#include<stdio.h>
#include<string.h>
void main(){
    char sentence[30];
    int Wordscount=0;
    int i;
    printf("Enter string");
    gets(sentence);
    for(i=0;i<strlen(sentence);i++){
        if(sentence[i]==' ')
        Wordscount++;
    }
    Wordscount++;
    printf("Words in %s = %d",sentence,Wordscount);
}