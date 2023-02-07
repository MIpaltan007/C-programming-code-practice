#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=7;i++){
        k=7-i;
        for(j=1;j<=8-i;j++){
            printf("%d",k);
            k--;
            
        }
        printf("\n");
    }
}
/*
6543210
543210
43210
3210
210
10
0  */