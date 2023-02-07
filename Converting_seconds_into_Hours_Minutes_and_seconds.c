#include<stdio.h>
void main(){
    int GivenTimeinsec,hours,minutes,seconds;
    printf("Enter time");
    scanf("%d",&GivenTimeinsec);
    printf("Hours=%d\n Minutes=%d\n Seconds=%d\n",GivenTimeinsec/3600,(GivenTimeinsec-3600)/60,(GivenTimeinsec-3600)%60);
}