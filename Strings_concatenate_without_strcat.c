#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int i,j,k;
    char first_name[6]="Aditya";
    char middle_name[6]="Bikram";
    char last_name[4]="Jena";
    char name[16];
    for(i=0;first_name[i]!='\0';i++)
    name[i]=first_name[i];
    name[i]=' ';
    for(j=0;middle_name[j]!='\0';j++)
    name[i+j+1]=middle_name[j];
    name[i+j+1]=' ';
    for(k=0;last_name[k]!='\0';k++)
    name[i+j+k+2]=last_name[k];
    name[i+j+k+2]='\0';
    printf("\n\n");
    printf("%s\n",name);
}