#include<stdio.h>
void main(){
    int Bdate,Bmonth,Byear,Pdate,Pmonth,Pyear,AgeDate,AgeMonth,AgeYear;
    printf("Enter BirthDate");
    scanf("%d",&Bdate);
    scanf("%d",&Bmonth);
    scanf("%d",&Byear);
    printf("Enter Present Date");
    scanf("%d",&Pdate);
    scanf("%d",&Pmonth);
    scanf("%d",&Pyear);
    AgeDate=Pdate-Bdate;
    AgeMonth=Pmonth-Bmonth;
    AgeYear=Pyear-Byear;
    if(AgeMonth<0 ){
        AgeYear=AgeYear-1;
        AgeMonth=AgeMonth+12;
        
    }
    else if (   AgeDate<0)
    {
        AgeDate=AgeDate+30;
        AgeMonth=AgeMonth-1;
        
    }
    printf("Current Age is %d Days %d Months %d Years",AgeDate,AgeMonth,AgeYear);
}