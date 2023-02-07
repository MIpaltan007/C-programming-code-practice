#include<stdio.h>
#include<ctype.h>
void main(){
    char var1='g';
    char var2= ' ';
    char var3='1';
    if(isgraph(var1)){
        printf("Yes,its graphical\n");
    }
    else{
        printf("No,it isn't graphical\n");
    }
   if(isgraph(var2)){
        printf("Yes,its graphical\n");
    }
    else{
        printf("No,it isn't graphical\n");
    }
    if(isgraph(var3)){
        printf("Yes,its graphical\n");
    }
    else{
        printf("No,it isn't graphical\n");
    }
}