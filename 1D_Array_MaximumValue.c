#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[]={1,2,3,4,5,6,7};
    int i,max;
    max=arr[0];
    for(i=1;i<7;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Max digit is %d",max);
}