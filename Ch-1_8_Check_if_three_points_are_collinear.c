#include<stdio.h>
void main(){
    int x1,y1,x2,y2,x3,y3;
    float d;
    printf("Enter Coordinates");
    scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    d=0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y2-y1));
    if(d==0){
        printf("Points are Collinear");
    }
    else{
        printf("Not Collinear");
    }
}