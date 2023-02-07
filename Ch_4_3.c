#include<stdio.h>
#include<math.h>
void main(){
   int n;
   printf("Enter n");
   scanf("%d",&n);
   int temp=n,dig=0;
   while(temp>0){
       temp /= 10;
       dig++;
   }
   for(int j=dig;j>0;j--){
       int k= (int)pow(10,j);
       printf("%d\n",n%k);
   }
   
}