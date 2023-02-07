#include<stdio.h>
void main(){
    int a[10],n1,n2,i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number you want to replace");
    scanf("%d",&n1);
    printf("Enter number you want to place");
    scanf("%d",&n2);
    for(i=0;i<10;i++){
        if(a[i]==n1)
        a[i]=n2;
    }
    printf("Updated Array");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}