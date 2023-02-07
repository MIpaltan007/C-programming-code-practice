#include<stdio.h>
#include<math.h>
void main(){
    int i,terms=0,sum;
    for(i=0;i<=100;i++){
        if(i%6==0 && i%4!=0){
           terms+=1;
           sum+=i;
         printf("NumberofTerms=%d,Sum=%d",terms,sum);
         printf("Terms are %d\n",i);

        }
    }
    
}