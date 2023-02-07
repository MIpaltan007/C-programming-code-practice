#include<stdio.h>
void main(){
    int n,i,fact=1,fsel=0;
    printf("Enter number upto which you want Factorial Summation");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        fsel=fsel+fact;
      printf("Sum is %d\n",fsel);
}
    }
    