#include<stdio.h>
void main(){
    int count=0,i;
    float height,weight;
    printf("Enter Height and weight for 10 boys\n");
    for(i=1;i<=10;i++){
        scanf("%f %f",&height,&weight);
        if(weight<50 && height>170)
        count=count+1;
    }
    printf("Number of boys with Height>170 and weight<50 is %d\n",count);
}