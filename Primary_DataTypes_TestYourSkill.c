#include<stdio.h>
void main(){
    char MyName[20];
    int age,subject1,subject2;
    printf("Enter the name of the students:\n");
    scanf("%s",&MyName);
    printf("Enter Subject 1 marks:\n");
    scanf("%d",&subject1);
    printf("Enter Subject 2 marks:\n");
    scanf("%d",&subject2);
    printf("Enter students age:\n");
    scanf("%d",&age);
    float average=(subject1+subject2)/2.0;
    printf("My Name is %s\n",MyName);
    printf("My age is %d\n",age);
    printf("Average marks is %f\n",average);

    
}