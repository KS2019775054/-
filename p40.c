#include <stdio.h>

int main()
{
	char a;
	int space,all,newline;
	a = getchar();
	space = all = newline = 0;
	while(a!='#')
	{
		if(a==' ')
			space++;
		else if(a=='\n')
			newline++;
		all++;	
		a = getchar();
	}
	
	printf("%d %d %d",space,newline,all-space-newline);

}
