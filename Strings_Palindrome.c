#include<stdio.h>
void main(){
    char str1[10];
    int i;
    printf("Enter string");
    scanf("%s",str1);
    for(i=0;i<=4;i++){
        if(str1[i]==str1[9-i]){
            printf("String is palindrome");
        }
        else{
            printf("String is not palindrome");
        }
    }
}