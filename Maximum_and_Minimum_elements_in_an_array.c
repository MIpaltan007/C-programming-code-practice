#include<stdio.h>
void main(){
    int a[3],i,min,max;
    for(i=0;i<3;i++){
        printf("Enter numbers");
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<3;i++){
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("Max=%d\n and Min=%d\n",max,min);
}