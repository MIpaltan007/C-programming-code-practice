#include<stdio.h>
void main(){
    int i,n;
    float sum;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1/(float)i;
    printf("%2d %6.4f\n",i,sum);
    }
    
}