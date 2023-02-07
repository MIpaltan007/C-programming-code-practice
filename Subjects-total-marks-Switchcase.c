#include<stdio.h>
void main()
{
    double Maths,Physics,Chemistry,PE,English,result;
    printf("Enter Math marks:\n");
    scanf("%lf",&Maths);
    printf("Enter Physics marks:\n");
    scanf("%lf",&Physics);
    printf("Enter Chemistry marks:\n");
    scanf("%lf",&Chemistry);
    printf("Enter PE marks:\n");
    scanf("%lf",&PE);
    printf("Enter English marks:\n");
    scanf("%lf",&English);

    result=Maths+Physics+Chemistry+PE+English;
    switch ((int)result/50)                  //Tumhe asal me result by 50 karna chaiye tha agar indivisual subject ke max. marks 100 hain to.
    {                                         //maine yahan par bas %lf se kiya hai kyoki marks 45.5 etc bhi ho sakte hain.
    case 0:                                  // aur tumhe ek case 10 wala bhi add karna padega kyoki max. total marks 500 hoga and 500/50 =10.
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
    case 10:
    printf("A grade \n");
    break;
    default:
    printf("invalid marks\n");

    }
}
