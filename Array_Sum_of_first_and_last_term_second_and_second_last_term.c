#include<stdio.h>
void main(){
    int a[6]={1,3,5,7,9,11};
    int i,j;
    for(i=0,j=5;i<=j;i++,j--){
     
      printf("%d\n",a[i]+a[j]);
    }
    
}