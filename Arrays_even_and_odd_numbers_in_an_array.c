#include<stdio.h>
void main(){
    int arr[10];
    int i,even=0,odd=0;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("%d and %d are the number of odd and even numbers respectively",odd,even);
}