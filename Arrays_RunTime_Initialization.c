#include<stdio.h>
void main(){
    int a[100],i;
    for(i=0;i<100;i++){
        if(i<30)
        a[i]=1;
        else
        a[i]=0;

         printf("%d ",a[i]);
    }
   
}