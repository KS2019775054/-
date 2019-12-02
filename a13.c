#include <stdio.h>

int main()
{
	int m,e,y,c = 0;
	scanf("%d %d %d",&m,&e,&y);
	double sum;
	sum = m;
	while(sum > 0)
	{
		if(m*(e/100.0) >= y)
			break;
		sum = sum+ sum*(e/100.0) - y;
		c++;
	}
	if(m*(e/100.0) >= y)
		printf("NO");
	else
		printf("%d",c);
}
