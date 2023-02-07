#include<stdio.h>
void main(){
    int i,j,spaces,rows;
    printf("Enter rows");
    scanf("%d",&rows);
   for(i=1;i<=rows;i++){
       for(spaces=1;spaces<=rows-i;spaces++){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           printf("* ");
       }
       printf("\n");
   }
}/*                *
                  * *
                 * * *
                * * * *
               * * * * *     */