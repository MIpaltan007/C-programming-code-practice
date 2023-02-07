#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=1;
        for(j=1;j<=5;j++){
            if(j==i){
                printf("%d",k);
                k++;
            }
            else if(j==i-1){
                printf("%d",k+5);
                k++;
            }
            else if(j==i-2){
                printf("%d",k+9);
                k++;
            }
            else if(j==i-3){
                printf("%d",k+12);
                k++;
            }
            else if(j==i-4){
                printf("%d",k+14);
                
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}
/*   1
     62
     1073
     131184
     15141295 */