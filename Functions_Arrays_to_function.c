#include<stdio.h>
int avg(int[],int);
void main(){
    int marks[5]={10,20,30,40,50};
    int size;
    size=sizeof(marks)/sizeof(marks[0]);
    int average;
    average=avg(marks,size);
    printf("%d",average);
}
int avg(int marks1[],int size)
{
    int i,sum=0,average;
    for(i=0;i<size;i++){
        sum=sum+marks1[i];
    }
    average=sum/size;
    return average;
}