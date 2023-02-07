#include<stdio.h>
#include<math.h>
#define POPULATION 10000
void main(){
    int n,i;
    float rate,new_population,RATE,Rate_Expansion;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter rate\n");
    scanf("%f",&rate);
    for(i=1;i<=n;i++){
    
      RATE=(1-rate);
      Rate_Expansion=pow(RATE,i);
      new_population=POPULATION/Rate_Expansion;
      printf("%f\n",new_population);
    }
    
}