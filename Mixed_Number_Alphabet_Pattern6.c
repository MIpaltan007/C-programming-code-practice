#include<stdio.h>
void main(){
    int i,j,spaces,k;
    char alpha;
    for(i=1;i<=4;i++){
        k=1;
        alpha='A';
        for(spaces=1;spaces<=4-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==1){
                
                printf("%d ",k);
                ++k;
                
            }
            else{
                
                printf("%c ",alpha);
                ++alpha;
            }

        }
        printf("\n");
    }
}