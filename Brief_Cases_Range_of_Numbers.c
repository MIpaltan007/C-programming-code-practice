#include<stdio.h>
void main(){
    int i,arr[10],large,small;
    for(i=0;i<10;i++){
        printf("Enter values");
        scanf("%d",&arr[i]);
     large=small=arr[0];
    }
    for(i=1;i<10;i++){
        if(arr[i]>large)
        large=arr[i];
        if(arr[i]<small)
        small=arr[i];
    }
    printf("Largest Element=%d\n",large);
    printf("Smallest Element=%d\n",small);
    printf("Range=%d",large-small); 
}