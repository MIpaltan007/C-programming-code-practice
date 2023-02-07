#include<stdio.h>
void main(){
    int n;
    float q;
    long int p=1;
    for(n=0;n<=21;++n){
        if(n==0){
            p=1;
        }
        else{
            p=p*2;
        }
        q=1.0/(double)p; 
        printf("%10ld %10d %20.12f\n",p,n,q);
    }
}