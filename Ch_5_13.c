#include<stdio.h>
void main(){
    char input;
    float DollarToEuro=0.91;
    float DollarToINR=76.44;
    float first,second;
    while(1)
    {
        printf("Input q for quit\n  1 for DollarToEuro\n  2 for DollarToINR\n");
        scanf("%c",&input);
        switch (input)
        {
        case 'q':
        printf("QUIT");
            
            break;
        case '1':
        printf("Enter first quantity\n");
        scanf("%f",&first);
        second=first*DollarToEuro;
        printf("%f\n",second);
         break;
        case '2':
        printf("Enter first quantity\n");
        scanf("%f",&first);
        second=first*DollarToINR;
        printf("%f\n",second);
        break;
        default:
        printf("Invalid unit");
            break;
        }
    }
}