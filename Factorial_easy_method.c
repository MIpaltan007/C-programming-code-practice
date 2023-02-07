#include<stdio.h>
#include<math.h>
void main(){
    int sum,i,n;
    printf("Enter n");
    scanf("%d",&n);
    sum=1;
    for(i=n;i>1;i--){
        sum*=i;
    }
    printf("Result is %d",sum);
}