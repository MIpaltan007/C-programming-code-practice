#include<stdio.h>
#include<stdlib.h>
void main(){
    int arr[10]={9,2,4,5,7,8,2,4,2,1};
    int i,key,frequency;
    
    printf("Enter number of which you want frequency");
    scanf("%d",key);
    for(i=0;i<10;i++){
        if(arr[i]==key)
        frequency++;
    }
    printf("Frequency of %d is %d",key,frequency);

    
}