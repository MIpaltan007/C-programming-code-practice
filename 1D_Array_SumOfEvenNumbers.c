#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,evenSum;
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
        evenSum+=arr[i];
    }
    printf("Sum of even numbers is %d",evenSum);
}