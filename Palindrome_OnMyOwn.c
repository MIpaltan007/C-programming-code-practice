#include<stdio.h>
void main(){
    int firstnumber,lastnumber,i;
    printf("Enter first number\n");
    scanf("%d",&firstnumber);
    printf("Enter last number\n");
    scanf("%d",&lastnumber);
    for(int i=firstnumber;i<lastnumber;i++){
        int num = i,rev=0;
        while(num>0){
            int dig = num%10;
            rev = rev*10 + dig;
            num = num/10;
        }

        if(rev == i) printf("%d\n",i);
    }
}