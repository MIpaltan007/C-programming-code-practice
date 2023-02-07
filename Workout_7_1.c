#include<stdio.h>
/*void main(){
    int n,count;
    float x,y;
    printf("Enter x and n");
    scanf("%f %d",&x,&n);
    y=1.0;
    count=1;
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("x=%f, n=%d,y=%f",x,n,y);
}*/
void main(){
    int i,n;
    float x,y;
    y=1.0;
   
    printf("Enter x and n");
    scanf("%f %d",&x,&n);
    for(i=1;i<=n;i++){
        y=y*x;
      
    }
    printf("%f",y);
}