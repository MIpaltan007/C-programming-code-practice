#include<stdio.h>
void main(){
    int a,n,d,b;
    printf("Enter first term:\n");
    scanf("%d",&a);
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    printf("Enter difference:\n");
    scanf("%d",&d);
    b=a+(n-1)*d;
    printf("Nth term=%d",b);
}