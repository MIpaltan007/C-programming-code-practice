#include<stdio.h>
void main(){
    char str1[5]="Hello";
    char str2[5]="hello";
    int i,flag;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
             flag=1;
            break;
        }
      

    }
      if(flag==1)
        printf("Not Equal");
        else
        printf("Equal");
}