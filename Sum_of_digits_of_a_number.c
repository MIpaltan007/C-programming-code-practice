#include<stdio.h>
void main(){
    int num,currentdigit,evensum=0,oddsum=0;
    printf("Enter Sum");
    scanf("%d",&num);
    while(num>0){
        currentdigit=num%10;
        if(currentdigit%2==0){
            evensum+=currentdigit;
        }
        else{
            oddsum+=currentdigit;
        }
        num=num/10;
    }
    printf("Sum of digits is %d",evensum+oddsum);
}