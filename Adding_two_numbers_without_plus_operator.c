#include<stdio.h>
void main(){
    int x,y;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    while(y!=0){
        x++;
        y--;
    }
    printf("Sum of 2 values is %d",x);
}