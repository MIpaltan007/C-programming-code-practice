/*#include<stdio.h>
void main(){
    char str[50];
    int a=10,b=20,c=a+b; 
    sprintf(str,"Sum of %d and %d is %d",a,b,c);
    printf("%s",str);
}
OUTPUT- "Sum of 10 and 20 is 30"*/

/*#include<stdio.h>
#include<math.h>
#define M_PI 3.1415926
void main(){
    char str[50];
    sprintf(str,"Value of Pi is %d",M_PI);
    printf("%s",str);
}
Output- "Value of PI is 3.1415926"*/

#include<stdio.h>
void main(){

    int num;
    printf("Enter number");//Enters the number//
    scanf("%d",&num);
    int length;
    char output[60];//stores the number//
    length=sprintf(output,"%d",num);
    printf("Number is %s and its length is %d",output,length);
}