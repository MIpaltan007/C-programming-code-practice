#include<stdio.h>
void modify(char[],char[]);
void main(){
    char str1[]="Jenny";
    char str2[]="Khatri";
    modify(str1,str2);
}
void modify(char str1[],char str2[]){
    int i,length=0;
    for(i=0;str1[i]!='\0';i++)
        length=length+1;
        printf("Length of sstring is %d",length);
        str2[1]='k';
        printf("%s %s",str1,str2);


    
}