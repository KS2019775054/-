#include <stdio.h>

int main()
{
	char c;
	int a = 0;
	while(scanf("%c",&c), c!='#')
	{
		if(c == 'e')
		{
			scanf("%c",&c);
			if(c == 'i')
				a++;
		}
	}
	printf("%d",a);
}
