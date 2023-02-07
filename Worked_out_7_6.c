#define FIRST 360
#define SECOND 240
#include<stdio.h>
void main(){
    int m,n,i,j,roll_number,marks,total;
    printf("Enter students and subjects");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;++i){
        printf("Enter roll number");
        scanf("%d",&roll_number);
        total=0;
        printf("Enter marks of %d subjects for %d Roll number",m,roll_number);
        for(j=1;j<=m;j++)
        {
            printf("Enter marks");
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("Total Marks=%d",total);
        if(total>=FIRST)
        printf("FIRST DIVISION\n");
        else if(total>=SECOND)
        printf("SECOND DIVISION\n");
        else
        printf("FAIL\n");
    }
}