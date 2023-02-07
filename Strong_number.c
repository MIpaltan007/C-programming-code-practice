#include<stdio.h>
void main(){
    int n,i,j,k,a,facta,b,c,factc,d,factd;
    printf("%d\n",&n);
    a=n%10;
b=n/10;
    c=b%10;

    d=b/10;
    for(i=a;i<=1;i--){
        facta*=i;
    }
    
    for(j=c;j<=1;j--){
        factc*=j;
    }
    
    for(k=d;k<=1;k--){
        factd*=k;
    }  
    if(n==facta+factc+factd){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }
}