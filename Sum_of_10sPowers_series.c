#include<stdio.h>
#include<math.h>
void main(){
    int i,n,sum,a;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        a = pow(10,i);
        sum+=a;
    }
    printf("Sum is %d",sum);
}