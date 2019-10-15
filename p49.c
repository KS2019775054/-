#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int b,c;
	b = c = 0;
	scanf("%s",a);
	for(int i = 0; i<strlen(a);i++)
	{
		if(a[i]=='(')
			b++;
		else if(a[i]==')')
			c++;
		if(c>b)
			break;
	}	
	if(b==c)
		printf("YES");
	else
		printf("NO");
}
