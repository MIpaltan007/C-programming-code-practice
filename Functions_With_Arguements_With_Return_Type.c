#include<stdio.h>
int sum(int,int);
void main(){
    int x,y,c;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    c=sum(x,y);
    printf("Sum=%d",c);
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}