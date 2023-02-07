/*#include<stdio.h>
void main(){
    char str[128];
    {
        printf("Enter string");
        scanf("%[A-Z]s",&str);//This will allow only the first Capital Letters to print,once there is a lowercase letter in between.Then it won't print any capital letters further//
        printf("%s\n",str);
    }
}*/

#include<stdio.h>
void main(){
    char str[128];
    {
        printf("Enter string");
        scanf("%[^o]s",&str);//All the letters after 'o' won't be printed//
        printf("%s\n",str);
    }
}

