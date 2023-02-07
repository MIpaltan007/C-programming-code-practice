#include<stdio.h>
#include<stdlib.h>
int NineNumber(int length)
{
    int i,num=0;
    for(i=0;i<=num;i++)
    {
        num=num*10+9;
    }
    return num;
}
int main()
{
    int lengthseq,result;
    printf("Enter Length Seq");
    scanf("%d",&lengthseq);
    result=NineNumber(lengthseq);
    printf("Result=%d",result);
    return 0;
}