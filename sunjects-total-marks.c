#include<stdio.h>
void main()
{
    int Maths,Physics,Chemistry,PE,English,result;
    printf("Enter Math marks:\n");
    scanf("%d",&Maths);
    printf("Enter Physics marks:\n");
    scanf("%d",&Physics);
    printf("Enter Chemistry marks:\n");
    scanf("%d",&Chemistry);
    printf("Enter PE marks:\n");
    scanf("%d",&PE);
    printf("Enter English marks:\n");
    scanf("%d",&English);

    result=Maths+Physics+Chemistry+PE+English;
    switch (result/10)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    printf("F grade \n");
    break;
    case 4:
    case 5:
    printf("D grade \n");
        break;
    case 6:
    printf("C grade \n");
    break;
    case 7:
    printf("B grade \n");
    break;
    case 8:
    case 9:
    printf("A grade \n");
    break;
    default:
    printf("invalid marks\n");
    
    }
}