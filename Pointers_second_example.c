/*#include<stdio.h>
void main(){
    int x=10;
    int *p,*q;
    p=&x;
    q=p;
    printf("%d %d",*p,*q);

}*/

/*#include<stdio.h>
void main(){
    int i=10,j=20;
    int *p,*q;
    p=&i;
    q=&j;
    *q = *p;
    printf("%d %d",*p,*q);
}*/

#include<stdio.h>
void main(){
    int i=1;
    int *p=&i;
    int *q;
    q=p;
    *q=5;
    printf("%d",*p);

}