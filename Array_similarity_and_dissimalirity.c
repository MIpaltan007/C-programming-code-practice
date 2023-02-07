#include<stdio.h>
void main(){
	int a[4],b[4],i,j;
	printf("Enter first array");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter second array");
	for(j=0;j<4;j++){
		scanf("%d",&b[j]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(a[i]==b[j])
			
			printf("Arrays are similar at positions %d and %d of respective array\n",i+1,j+1);
			else
			printf("Arrays are dissimilar positions at %d and %d of respective arrays\n",i+1,j+1);
		}
	}
}
    