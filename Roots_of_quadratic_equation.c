#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,root1,root2;
    printf("Input the values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0){
        printf("ROOTS ARE IMAGINARY");
    
    }
    else{
        root1=(-b+sqrt(d))/(2.0*a);
        root2=(-b-sqrt(d))/(2.0*a);
        printf("Root1=%f,Root2=%f",root1,root2);
    }
}