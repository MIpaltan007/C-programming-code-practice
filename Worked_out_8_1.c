#include<stdio.h>
#include<math.h>
#define N 10
void main(){
    float arr[N],total;
int i;
for(i=0;i<N;i++){
    printf("Enter elements for %d",i);
    scanf("%d\n",arr[i]);
}
for(i=0;i<N;i++){
    total+=arr[i]*arr[i];
    
}
for(i=0;i<N;i++){
    printf("arr[%2d]=%5.2f\n",i+1,arr[i]);
    printf("Total=%.2f",total);
}
}