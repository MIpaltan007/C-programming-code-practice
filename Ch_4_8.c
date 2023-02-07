#include<stdio.h>
#include<math.h>
void main(){
    float inductance,resistance,a,b,c,frequency,capacitance;
    printf("Enter Inductance and Resistance");
    scanf("%f %f",&inductance,&resistance);
    for(capacitance=0.01;capacitance<=0.1;capacitance=capacitance+0.01){
        a=1.0/(inductance*capacitance);
        b=(resistance*resistance)/(4.0*capacitance*capacitance);
        c=sqrt(a-b);
        frequency=c;
        printf("%f\n",frequency);
    }
}