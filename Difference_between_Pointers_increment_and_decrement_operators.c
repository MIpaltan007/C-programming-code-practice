/*#include<stdio.h>
void main(){
    int arr[]={10,20};
    int *p=arr;
    *p++;
    printf("%d",*p);
}*///prints arr[1],i.e 20//

/*#include<stdio.h>
void main(){
    int arr[]={10,20};
    int *p=arr;
    ++*p;
    printf("%d",*p);
}*/
//prints ++arr[0] which is ++10=11//

#include<stdio.h>
void main(){
    int arr[]={10,20};
    int *p=arr;
    *++p;
    printf("%d",*p);
}
//Prints arr[1]is 20//