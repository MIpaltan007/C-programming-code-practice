#include<stdio.h>
/*void main()
{
    int i,j,k;
    for(i=0,j=0,k=0;i<4,k<8,j<10;i++){
        printf("%d %d %d\n",i,j,k);
        j+=2;
        k+=3;
    }
}*/



/*void main(){
    int i,j=0;
    for(;i<=5;i++){
        printf("%d %d\n",i,j);
    }
}*/

/*void main(){
    int i,j;
    for(i=1,j=0;i<=100,j<3;i++,j++){  //last statement j<3, if this statement is false then iteration stops//
        printf("%d %d\n",i,j);
    }
}*/

/*void main(){
   int i,j;
   for(i=1,j=0;i==10;i++,j++){  //It won't execute as 1==10(1st iteration) is false//
       printf("%d %d\n",i,j);
   }
}*/

/*void main(){
    int i,j;i==10;
    for(i=1,j=0;i<=100 && j<3;i++,j++){
        printf("%d %d\n",i,j);
    }
}
   1 0
   2 1
   3 2*/

/*void main(){
    int i,j;
    for(i=1,j=0;i<=100 || j<3;i++,j++){
        printf("%d %d\n",i,j);
    }
}   
 1 0
 . .
 100 99 */

/*void main(){
    int i=1;
    for(;i<5;){
        printf("Jenny");
    }
}
Prints Infinite times */

/*void main(){
    int i,j;
    for(i=1,j=0;i<5,j<=6;i++,j++);
    {
        printf("%d %d\n",i,j);
    }
}
Prints 8 7 */

void main(){
    int i,j;
    for(i=1,j=0;i<5,j<=6;i++);
    {
        printf("%d %d\n",i,j);
        j++;
    }
}