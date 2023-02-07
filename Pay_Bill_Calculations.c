#include<stdio.h>
#include<math.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0
void main(){
    int level,jobnumber;
    float gross,basic,rent,perks,incometax,net;
    printf("Enter level,jobnumber,basicpay\n");
    scanf("%d",&level);
    scanf("%d\n %f\n",&jobnumber,&basic);
    switch (level)
    {
    case 1:
    perks=CA1+EA1;
        break;
    case 2:
    perks=CA2+EA2;
    break;
    case 3:
    perks=CA3+EA3;
    break;
    case 4:
    perks=CA4+EA4;
    break;

    default:
    printf("Invalid Level");
        break;
    }
    rent=basic*0.25;
    gross=basic+rent+perks;
    if(gross<=200)
    incometax=0;
    else if(gross<=400)
    incometax=0.03*gross;
    else if(gross<=500)
    incometax=0.05*gross;
    else
    incometax=0.08*gross;
    net=gross-incometax;
    printf("%d %d %.2f",level,jobnumber,net);
}