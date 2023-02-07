#include<stdio.h>
/*#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}*/
/*#include<stdlib.h>
void main(){
   float x,y;
   int a,*ptr;
   ptr=&x;
   ptr=&a;
   printf("%d",ptr);
}*/
void main(){
   int a[]={3,2,67,0,56};
   int *p;
   p=&a[2];
   printf("%d %d %d",*--p,*--p,*--p);
   printf("%d %d %d",--(*p),(*p)++,++(*p));
}