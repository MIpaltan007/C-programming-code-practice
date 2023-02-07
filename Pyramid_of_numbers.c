#include<stdio.h>
void main(){
    int i,j,k,n,presentnum=1;
    printf("Enter rows");
    scanf("%d",&n);
    int BlankSpaces=n-1;
    for(i=1;i<=n;i++){
        for(k=BlankSpaces;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",presentnum);
            presentnum+=1;
        }
        printf("\n");
        BlankSpaces--;
    }
}