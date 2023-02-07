#include<stdio.h>
void main(){
	int i,n,s=0,sum;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=s+i;
    printf("%d\n",sum);
	s=sum;
	}
	
	
}