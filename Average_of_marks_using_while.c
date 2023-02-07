#include<stdio.h>
void main(){
    int grades,TotalSum=0,GradesCount=0;
    printf("Enter grades or -1 to stop");
    scanf("%d",&grades);
    while(grades!=-1)
    {
        TotalSum=TotalSum+grades;
        GradesCount++;
    printf("Enter grades or -1 to stop");
    scanf("%d",&grades);
 }
 printf("Entered %d grades\n",GradesCount);
 printf("Average Grade is %f\n",(float)TotalSum/GradesCount);
}