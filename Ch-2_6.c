#include<stdio.h>
void main()
{
    int date,month,year;
    printf("Enter date:\n");
    scanf("%d",&date);
    printf("Enter month:\n");
    scanf("%d",&month);

    char *month_name;
    if(month==1){
        month_name="January";
    }
else if(month==2){
     month_name="February"   ;
    }
else if(month==3){
        month_name="March";
    }
else if(month==4){
       month_name= "April";
    }
else if(month==5){
        month_name="May";
    }
else if(month==6){
       month_name= "June";
    }
else if(month==7){
       month_name= "July";
    }
else if(month==8){
        month_name="August";
    }
else if(month==9){
        month_name="September";
    }
else if(month==10){
        month_name="October";
    }
else if(month==11){
        month_name="November";
    }
else {
        month_name="December";
    }

printf("Enter Year:\n");
scanf("%d",&year);
printf("Date is %d,%s,%d",date,month_name,year);

}