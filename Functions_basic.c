/*#include<stdio.h>
int main(){
    int a,b,s;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    s=sum(a,b);//function call//
    printf("%d",s);
    return 0;
}
int sum(int c,int d)
{
    int r;
    r=c+d;
    return r;
}*/

#include<stdio.h>
int main(){
    int a,b,s;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    s=mul(a,b);//function call//
    printf("%d",s);
    return 0;
}
int mul(int c,int d)
{
    int r;
    r=c*d;
    return r;
}