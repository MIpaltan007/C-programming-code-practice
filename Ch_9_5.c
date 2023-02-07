#include <stdio.h>
int main()
{
    int i,j;
	char string[20], temp;
	printf("Enter string : ");
	gets(string);
	for ( i = 0; i < strlen(string)-1; i += 1)
	{
		for ( j = i+1; j < strlen(string); j += 1)
		{
			if (string[i] > string[j])
			{
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	printf("In alphabetical order : %s", string);
}