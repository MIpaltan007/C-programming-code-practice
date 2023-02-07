#include<stdio.h>
#include<math.h>
void main(){
    int a,b,i,lcm,gcd;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
            lcm=(a*b)/gcd;
        }
    }
    printf("GCD=%d LCM=%d",gcd,lcm);
}