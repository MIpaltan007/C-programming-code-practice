#include<stdio.h>
#include<math.h>
int GCD(int m, int n);
void main(){
    int num1,num2;
    printf("The two numbers are\n");
    scanf("%d %d",&num1,&num2);
    printf("GCD=%d",GCD(num1,num2));
}
int GCD(int a,int b){

    if(b>a){
        return GCD(b,a);
    }
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}