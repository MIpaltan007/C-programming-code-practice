#include<stdio.h>
int main(){
    int i,N;
    printf("Enter N");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int b=(N-1)/2;
   
if(N%2==1){
    printf("Median is %d",a[b]);
}
else if(N%2==0){
    printf("Median is %d",(a[N/2]+a[(N-2)/2])/2);
}
else {
    printf("Median is not possible");
}

return 0;

}