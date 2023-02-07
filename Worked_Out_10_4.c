#include<stdio.h>
double power(int,int);
void main(){
    int x,y;
    double c;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    c=power(x,y);
    printf("%lf",c);
}
double power(int x,int y)
{
    double p;
    p=1;
    if(y>=0)
    while(y--)
    p*=x;
    else
    while(y++)
    p/=x;
    return(p);
}