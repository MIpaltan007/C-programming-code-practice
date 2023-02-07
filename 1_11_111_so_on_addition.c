#include<stdio.h>
#include<math.h>
void main(){
    int n,i,sum;
    printf("Enter range of n:\n");
    scanf("%d",&n);
    int p=1;
    for(i=1;i<=n;i++){
        sum+=p;
        p=(p*10)+1;
    }
    printf("Sum is %d",sum);

}