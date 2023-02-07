#include<stdio.h>
void main(){
    int a[3],i,j;
    for(i=0;i<3;i++){
        printf("Enter elements");
        scanf("%d",&a[i]);
      
    }
    for(i=0;i<2;i++){
        for(j=0;j=2-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array");
    for(i=0;i<3;i++){
        printf("%d",a[i]);
    }
}