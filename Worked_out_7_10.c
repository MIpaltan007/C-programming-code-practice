#include<stdio.h>
#include<math.h>
void main(){
    int count,negative;
    double sqroot,number;
    printf("Enter 9999 to stop");
    count=0,negative=0;
    while(count<=100){
        printf("enter number");
        scanf("%lf",&number);
        if(number==9999);
        break;
        if(number<0){
            printf("Negative numbers");
            negative++;
            continue;
        }
        sqroot=sqrt(number);
        printf("Number=%lf and square root=%lf",number,sqroot);
        count++;
    }
    printf("NUmbers legitimate=%d\n",count);
    printf("Negative numbers=%d\n",negative);
}