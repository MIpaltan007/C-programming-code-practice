#include<stdio.h>
void main(){
    int num,i,j,a,b,c;
    printf("Enter range");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        a=0;
        b=1;
        printf("%d\t",b);
        for(j=1;j<i;j++){
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
    
}