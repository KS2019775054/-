#include <stdio.h>

char asdf(char word)
{
	if(word>='A' && word<='Z')
	{
		return word-'A'+1;
	}
	else if(word>='a' && word<='z')
	{
		return word-'a'+1;
	}
	else 
		return -1;
}

int main()
{
	int i=0;
	char a,ch;

	while((ch = getchar()) != EOF)
	{
		if(ch=='\n' || ch==' ')
			continue;
		a = asdf(ch);
		if(a==-1)
			printf("%c is not a letter.\n",ch);
		else
			printf("%c is a letter #%d.\n",ch,a);
		
	}
}
