#include<stdio.h>
#include<ctype.h>
void main(){
    int i,upper=0,lower=0;
    char ch[100];
    printf("Enter strings:\n");
    scanf("%s",&ch);
    for(i=0;ch[i]!=0;i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            upper++;
        }
        else if (ch[i]>='a' && ch[i]<='z'){
            lower++;
        }
        
        printf("Lower characters:%d\n",lower);    
        printf("Upper characters:%d\n",upper);
        
    }
}