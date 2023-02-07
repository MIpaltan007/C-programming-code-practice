#include<stdio.h>
#define N 10

void main(){
    int a[N],i;
    for(i=0;i<N;i++){
        printf("Enter input for index %d\n",i);
        scanf("%d",&a[i]);
    }

    printf("Array elements are as follows\n");
    for(i=0;i<N;i++){
        printf("%d\n",a[i]);
    }
}