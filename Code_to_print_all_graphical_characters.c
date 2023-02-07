#include<stdio.h>
#include<ctype.h>
void main(){
    int i;
    printf("All Graphical Characters in C programming  are\n");
    for(i=0;i<=127;++i){
        if(isgraph(i)!=0){
            printf("%c ",i);
        }
    }
}