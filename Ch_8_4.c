#include<stdio.h>
void main(){
    int i,j,spaces,ncr;
    for(i=0;i<5;i++){
        for(spaces=1;spaces<=5-i;spaces++){
            printf(" ");
        }
        if(i==0||j==0){
            ncr=1;
            
        }
        else{
            ncr=(ncr*(i-j+1))/j;
            printf("%d ",ncr);
        }
        printf("\n");
    }
}