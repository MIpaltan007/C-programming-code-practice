#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("&d &d &d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is Largest",a);
    }
    if(b>a && b>c){
        printf("%d is largest",b);
    }
    if(c>a && c>b){
        printf("%d is largest",c);
    }
    if(a==b && a==c){
        printf("All are equal");
    }
}