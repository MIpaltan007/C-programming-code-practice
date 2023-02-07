#include<stdio.h>
void main(){
    int code[2],i;
    char names[2];
    float price[2];
    for(i=0;i<2;i++){
        printf("Enter Name,Code and Price");
        scanf("%s %d %f",&names[i],&code[i],&price[i]);    
    }
    printf("Name    Code    Price");
    for(i=0;i<2;i++){
        printf("%s %d %f\n ",names[i],code[i],price[i]);
  }
}