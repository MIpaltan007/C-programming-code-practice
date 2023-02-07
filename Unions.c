// #include<stdio.h>
// union abc
// {
//   int a;
//   char b;
//   float c;
// };
// void main()
// {
//     union abc u;
//     u.a=1;
//     u.b=97;
//     u.c=9.2;
//     printf("a=%d\n",u.a);
//     printf("b=%c\n",u.b);
//     printf("c=%f\n",u.c);
//     printf("Size of abc=%d",sizeof(union abc));

// }

#include <stdio.h>  
struct store  
{  
    double price;  
    union  
    {  
        struct{  
        char *title;  
        char *author;  
        int number_pages;  
        } book;  
      
        struct {  
        int color;  
        int size;  
        char *design;  
        } shirt;  
    }item;  
};  
  int main()  
{  
    struct store s;  
    s.item.book.title = "C programming";   
    s.item.book.author = "John";  
    s.item.book.number_pages = 189;  
    printf("Size is %ld", sizeof(s));  
    return 0;  
}  