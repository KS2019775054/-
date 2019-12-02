#include <stdio.h>
#include <string.h>

int main()
{
	char a[40];
	scanf("%s",a);
	int down = strlen(a);
	for(int i = 0; i < strlen(a); i++)
	{
		for(int j = 0; j < i ; j++)
		{
			printf("-");
		}
		
		for(int j = 0; j < down; j ++)
		{
			printf("%c",a[i+j]);
		}
		
		for(int j = 0; j < down-1; j ++)
		{
			printf("%c",a[strlen(a)-2-j]);
		}
		
		for(int j = 0; j < i ; j++)
		{
			printf("-");
		}
		
		down--;
		printf("\n");
	}
	
}
