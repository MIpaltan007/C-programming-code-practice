#include<stdio.h>
void main(){
    int arr[50];
    int i,zeroes=0,ones=0,twos=0,threes=0,fours=0,fives=0,sixes=0,sevens=0,eights=0,nines=0;
    for(i=0;i<50;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<50;i++){
        if(arr[i]>=0 && arr[i]<=9)
        zeroes=zeroes+1;
        else if(arr[i]>=10 && arr[i]<=19)
        ones=ones+1;
        else if(arr[i]>=20 && arr[i]<=29)
        twos=twos+1;
        else if(arr[i]>=30 && arr[i]<=39)
        threes=threes+1;
        else if(arr[i]>=40 && arr[i]<=49)
        fours=fours+1;
        else if(arr[i]>=50 && arr[i]<=59)
        fives=fives+1;
        else if(arr[i]>=60 && arr[i]<=69)
        sixes=sixes+1;
        else if(arr[i]>=70 && arr[i]<=79)
        sevens=sevens+1;
        else if(arr[i]>=80 && arr[i]<=89)
        eights=eights+1;
        else
        nines=nines+1;

    }
    printf("GROUP      RANGE      FREQUENCY\n");
    printf("\n  1        0 to 9        %d ",zeroes);
    printf("\n  2        10 to 19      %d ",ones);
    printf("\n  3        20 to 29      %d ",twos);
    printf("\n  4        30 to 39      %d ",threes);
    printf("\n  5        40 to 49      %d ",fours);
    printf("\n  6        50 to 59      %d ",fives);
    printf("\n  7        60 to 69      %d ",sixes);
    printf("\n  8        70 to 79      %d ",sevens);
    printf("\n  9        80 t0 89      %d ",eights);
    printf("\n  10       90 to 99      %d ",nines);

}