#include <stdio.h>

int main()
{
	char ch;
	int space,newline,all;
	space = newline = all = 0;
	
	while((ch=getchar()) != EOF)
	{
		if(ch == '\n')
			newline++;
		else if(ch == ' ')
			space++;
		else
			all++;
	}
	printf("%d %d %d",space,newline,all);
}
