#include<stdio.h>
#include<math.h>
void main(){
    int i,b;
    float a;
    for(i=0;i<=100;i=i+10){
       a=sqrt(i);
       b=i*i;
       printf("%15d %15f %15d\n",i,a,b);
    }
    
}