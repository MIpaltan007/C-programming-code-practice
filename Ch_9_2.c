#include <stdio.h>
#include<string.h>
void main()
{
	char name[20];
	printf("Who is the inventor of ? : ");
	for (int i = 1; i <= 3; i += 1)
	{
		gets(name);
		if (strcmp(name, "Dennis Ritchie") == 0 || strcmp(name, "dennis ritchie") == 0)
		{
			printf("Good!");
			break;
		}
		else if (i != 3)
		{
			printf("Try again : ");
		}
        else{
            printf("Founder in Dennis Ritchie");
        }
	}
	
}