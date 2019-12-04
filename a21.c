#include <stdio.h>

int main()
{
	char ch;
	int small,big;
	small = big = 0;
	
	while((ch=getchar()) != EOF)
	{
		if('a'<=ch&& ch<='z')
			small++;
		else if( 'A'<= ch && ch<= 'Z')
			big++;
	}
	printf("%d %d",big,small);
}
