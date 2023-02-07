#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char sentence[30];
    int i=0,count=0;
    printf("Enter Sentence");
    gets(sentence);
    for(i=0;i<strlen(sentence);i++){
        if(sentence[i]!=' ')
        count++;
    }
    printf("Number of words in the sentence is %d",count);
}
