#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,position,value;
    printf("Enter position");
    scanf("%d",&position);
    printf("Enter value");
    scanf("%d",&value);
    for(i=9;i>=position-1;i--){
        a[i+1]=a[i];
        a[position-1]=value;

    }
    printf("Resulting Array");
    for(i=0;i<=10;i++){
        printf("%d\n",a[i]);
    }
}