#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
void main(){
    int row,column,y;
    for(row=1;row<=ROWMAX;++row)
    {
        for(column=1;column<=COLMAX;++column)
        {
            y=row*column;
            printf("%4d",y);
        }
        printf("\n");

    }

} 