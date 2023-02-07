#include<stdio.h>
void main(){
    int num,i,fact=1,fsel=0;
    printf("Enter limit");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
        fsel=fsel+fact/i;
    }
    printf("Sum is %d",fsel);
}