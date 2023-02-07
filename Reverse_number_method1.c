#include<stdio.h>
void main(){
    int num;
    int hundreds,tens,ones;
    printf("Enter 3 digit number\n");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    printf("Reverse number=%d%d%d",ones,tens,hundreds);
}