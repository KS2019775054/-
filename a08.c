#include <stdio.h>
#include <string.h>

int main()
{
	char a[150];
	scanf("%s",a);
	for(int i = 0; i < strlen(a); i++)
		printf("%c",a[strlen(a)-1-i]);
}
