#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(leapyear)
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
int leapyear(int y)
{
    if(y%400==0 || ( y%4==0 && y%100!=0))
    return 1;
    else return 0;
}
