#include<stdio.h>


void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void main()
{
    int x,y;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("%d %d",x,y);
}