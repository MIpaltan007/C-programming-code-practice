#include<stdio.h>
void main(){
    int num,Evennumsum=0,Oddnumsum=0,currentdigit;
    printf("Enter number");
    scanf("%d",&num);
    while(num>0){
        currentdigit=num%10;
        if(currentdigit%2==0){
            Evennumsum+=currentdigit;
        }
        else{
            Oddnumsum+=currentdigit;
        }
        num=num/10;

    }
    printf("Sum of Odd numbers is %d and Sum of even numbers is %d",Oddnumsum,Evennumsum);
}