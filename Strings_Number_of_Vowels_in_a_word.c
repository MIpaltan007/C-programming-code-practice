#include<stdio.h>
#include<stdlib.h>
void main(){
    char str[11]="Javatpoint";
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
           
        }
         i++;
    }
    printf("Number of vowels is %d",count);
}