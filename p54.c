#include <stdio.h>

int main()
{
	char ch;
	int b,s;
	b=s= 0;
	
	
	while((ch = getchar()) != EOF)
	{
		if(ch>='A' && ch <='Z')
			b++;
		else if(ch>='a' && ch <='z')
			s++;
	}
	printf("%d %d ",b,s);
}
