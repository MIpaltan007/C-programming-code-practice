#include<stdio.h>
int number,i;
void main(){
    printf("Enter table no:\n");
    scanf("%d",&number);
    for(i=1;i<11;i++){
        printf("%dx%d=%d\n",number,i,number*i);
    }
}