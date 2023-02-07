#include<stdio.h>
/*void main(){
    int a,i,sum=0;
    for(i=1;i<=5;i++){
        printf("Enter a number");
        scanf("%d",&a);
        if(a<0){
            break;
        }
        sum=sum+a;
    }
    printf("sum=%d",sum);
}*/

void main(){
    int i=1,x;
    while(i<=5){
        printf("Enter number");
        scanf("%d",&x);
        if(x>0)
        break;
        i++;
    }
    (i==6)?printf("Ends Normally"):printf("Break Applied");
}