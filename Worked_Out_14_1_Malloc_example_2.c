#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n;
    printf("Number of integers?");
    scanf("%d",&n);
    int *table=(int*)malloc(n*sizeof(int));
    if(table==NULL){
        printf("No space available");
        exit(1);
    }
    printf("Address of first byte is %u\n",table);
    for(i=0;i<n;i++){
        printf("Input Value");
        scanf("%d",table+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(table+i));
    }
}