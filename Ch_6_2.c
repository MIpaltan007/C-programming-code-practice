#include<stdio.h>
#include<math.h>
void main(){
    int i,firstnum,lastnum,num_of_integer=0,sum=0;
    printf("Enter First Number\n");
    scanf("%d",&firstnum);
    printf("Enter Last Number\n");
    scanf("%d",&lastnum);
    for(i=firstnum;i<=lastnum;i++){
        
        if(i%7==0){
           num_of_integer+=1;
           sum+=i;
        }
    }
    printf("Integers=%d\n Sum=%d\n",num_of_integer,sum);
}