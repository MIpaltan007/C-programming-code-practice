/* 1)Sum of array
   2)Count Even and Odd
   3)Sum of positive and negative  */

   #include<stdio.h>
   void main(){
       int a[10],i,ch,sum,odd=0,even=0,positiveSum,NegativeSum;
       printf("Enter 1 elements");
       for(i=0;i<10;i++){
           scanf("%d",&a[i]);
       }
       printf("1 for sum of array\n");
       printf("2 for counting odd and even\n");
       printf("3 for sum of positive and negative\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
              sum+=a[i];
              printf("%d",sum);
              break;
           case 2:
           if(a[i]%2==0)
           even=even+1;
           else 
           odd=odd+1;
           printf("Count of odd and even elements is %d and %d",odd,even);
           break;
           case 3:
           if(a[i]>=0)
           positiveSum+=a[i];
           else
           NegativeSum+=a[i];
           printf("Positive elements sum=%d and Negative Elements sum is %d");
           break;

       }
   }
