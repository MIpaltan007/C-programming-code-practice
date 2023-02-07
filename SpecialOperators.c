// #include<stdio.h>
// void main(){
//     int a;
//     a=(5,4);
//     printf("a=%d",a);
// }
/*Prints 4,the rightmost value*/

#include<Stdio.h>
void main(){
    int a=8,b;
    b=(a++,++a,a>>2);
    printf("a=%d,b=%d",a,b);
}