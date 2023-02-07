#include<stdio.h>
void main(){
    int arr[9]={34,56,54,32,67,89,90,32,21};
    for(int i=8;i>=0;i--){
        printf("Reverse order is %d\n",arr[i]);
    }
}