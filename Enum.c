#include<stdio.h>
  
// enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
  
// int main()
// {
//     enum week day;
//     day = Wed;
//     printf("%d",day);
//     return 0;
// } 

// enum month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
// void main()
// {
//     int i;
//     for(i=Jan;i<=Dec;i++)
//     printf("%d\n",i);
// }

// void main(){
//     enum Bool{False,True} var;
//     var=True;
//     printf("%d",var);
// }

// #include <stdio.h>
// enum State {WORKING = 0, FAILED, FREEZED};
// enum State currState = 2;

// enum State FindState() {
// 	return currState;
// }

// int main() {
// (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
// return 0;
// }
enum Day{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};
void main()
{
    enum Day today;
    printf("Enter today's day:\n");
    scanf("%d",&today);
    if(today==1||today==7)
    {
        printf("\n It's weekend time,Party Hard!");
    }
    else
    {
        printf("\n Have to Work again");
    }
}
