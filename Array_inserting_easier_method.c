#include<stdio.h>
void main(){
int array[8],i,position,value;
printf("Enter array elements");
for(i=0;i<=6;i++){
    scanf("%d",&array[i]);
}
printf("Enter position and element");
scanf("%d %d",&position,&value);
for(i=7;i>=position+1;i--){
    array[i]=array[i-1];
}
array[position]=value;
printf("Updated array");
for(i=0;i<8;i++){
    printf("%d\n",array[i]);
}

}