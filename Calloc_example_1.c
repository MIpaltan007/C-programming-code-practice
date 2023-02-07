#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,sum=0;
    printf("Enter number of elements");
    scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("No Space Available");
        exit(1);
    }
    printf("Enter Numbers");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum=sum + *(ptr+i) ;
    }
    printf("Sum is %d",sum);
}