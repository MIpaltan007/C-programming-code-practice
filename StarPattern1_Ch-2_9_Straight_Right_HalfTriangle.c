#include<stdio.h>
void main()
{
    int n, i,j;
    printf("Enter no.of stars:\n");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/* *
   **
   ***
   ****
   *****  */