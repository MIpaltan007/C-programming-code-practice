#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,sum;
    int *ptr=(int*)malloc(5*sizeof(int));
    printf("Enter 5 numbers");
    for(i=0;i<5;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum is %d",sum);
    free(ptr);
    ptr=NULL;
}