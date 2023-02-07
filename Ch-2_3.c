#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter number of whuch you want table:\n");
    scanf("%d",&num);
    for(i=0;i<11;++i){
        printf("%d * %d=%d\n",num,i,num*i);
    }
}