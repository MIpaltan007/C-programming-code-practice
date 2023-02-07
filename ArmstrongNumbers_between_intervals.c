#include<stdio.h>
void main(){
    int firstnumber,lastnumber,i,a,b,c,d;
    printf("Armstrong Numbers in the given range is:\n");
    printf("Enter firstnumber:\n");
    scanf("%d",&firstnumber);
    printf("Enter lastnumber:\n");
    scanf("%d\n",&lastnumber);
    for(i=firstnumber;i<=lastnumber;i++){
        int temp = i;
        a=i%10;
        b=i/10;
        c=b/10;
        d=b%10;
        if(temp==a*a*a+c*c*c+d*d*d){
            printf("%d\n",i);
        }
    }
}