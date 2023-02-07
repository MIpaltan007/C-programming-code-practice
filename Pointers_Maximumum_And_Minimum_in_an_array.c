#include<stdio.h>
void MinMax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    int i;
    for(i=1;i<len;i++){
        if(a[i]>*max)
        *max=a[i];
        if(a[i]<*min)
        *min=a[i];
    }
}
void main(){
    int a[]={23,45,6,98};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    MinMax(a,len,&min,&max);
    printf("Min=%d,Max=%d",min,max);
}