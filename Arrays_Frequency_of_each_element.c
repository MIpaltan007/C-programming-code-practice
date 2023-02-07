#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,size;
    
    printf("Enter number of elements");
    scanf("%d",&size);
    int *num=(int*)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("Enter num[%d]: ",i);
        scanf("%d",&num[i]);
    }
   int *freq=(int*)calloc(size,sizeof(int));
   for(i=0;i<size;i++){
    freq[num[i]]++;
   }
   printf("Frequencies are\n");
   for(i=0;i<size;i++){
    printf("\n Freq[%d]=%d",i,freq[i]);
   }
}