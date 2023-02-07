#include<stdio.h>
void main()
{
    double cp,sp,amt;
    printf("Enter cost price:\n");
    scanf("%lf",&cp);
    printf("Enter selling price:\n");
    scanf("%lf",&sp);
    amt=sp-cp;
    if(amt>0){
        printf("Profit=%lf",amt);
    }
    else if (amt<0)
    {
        printf("Loss=%lf",amt);
    }
}