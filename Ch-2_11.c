#include <stdio.h>
#include <math.h>
#include <conio.h>
 
void main(){
    float a, b, c, s, area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    /* Area of any triangle = 
       sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree))
       Where s = (sideOne + sideTwo + sideThree)/2  */
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle : %0.4f\n", area);
     
    
}