#include <stdio.h>
int x = 0;

int f1()
{
	x = 6;
	return x;
}

int f2()
{
	x = 4;
	return x;
}

int main()
{
	int p = f1() + f2();
	printf("%d ", x);
	getchar();
	return 0;
}
//Returns the last function assigned(f2) value //