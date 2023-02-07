#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter number that has to be reversed");
    scanf("%d",&n);
    while(n!=0){
        printf("%d",n%10);
        n=n/10;
    
    }
    
}