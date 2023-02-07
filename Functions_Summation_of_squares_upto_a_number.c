#include<stdio.h>
int square(int n){
    if(n==1){
        return 1;
    }
    else{
    return n*n + square(n-1) ;
    }
}
void main(){
    int a;
    printf("Enter number upto which you want summation");
    scanf("%d",&a);
    printf("\n%d",square(a));

}