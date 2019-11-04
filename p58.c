#include <stdio.h>

void asdf(char word)
{
	if(word>='A' && word<='Z')
	{
		printf("%c is a letter #%d.\n",word,word-'A'+1);
	}
	else if(word>='a' && word<='z')
	{
		printf("%c is a letter #%d.\n",word,word-'a'+1);
	}
	else if(word!='\n' && word!=' ')
		printf("%c is not a letter.\n",word);
	return 0;
}

int main()
{
	int i=0;
	char a[1000],ch;

	while((ch = getchar()) != EOF)
	{
		a[i]=ch;
		i++;
	}
	for(int  j = 0; j<i;j++)
		asdf(a[j]);
}
