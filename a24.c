#include <stdio.h>

char chk(char ch)
{
	
	if(ch >='A' && ch <='Z')
		return ch-'A'+1;
	else if(ch >='a' && ch <='z')
		return ch-'a'+1;
	else
		return -1;
}


int main()
{
	char ch;
	while((ch = getchar()) != EOF)
	{
		if(ch == '\n' || ch == ' ')
			continue ;
		if(chk(ch) == -1)
			printf("%c is not a letter.",ch);
		else
			printf("%c is a letter #%d.",ch,chk(ch));
		printf("\n");
	}
}
