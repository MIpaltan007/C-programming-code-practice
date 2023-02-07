/*#include<stdio.h>
void main(){
    int i=1,j=3;
    do
    {
        do{
            printf("%d",j);
            j--;
        }while(j>0);
        i++;
        printf("%d",i);
    } while (i<4);
}*/

#include<stdio.h>
void main()
{
    int i=1,j=3;
    do{
     do{
        printf("%d",--j);
    }while(j>0);
    i++;
    printf("%d",i);

}while(i<4);
}