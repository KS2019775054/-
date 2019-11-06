#include <stdio.h>

unsigned long long int fi(int u)
{
	int c;
	c = u;
	unsigned long long int start,middle,end;
	start = 1;
	middle = 0;
	end = 0;
	for(int i = 1; i<=c; i++)
	{
		end = start + middle;
		start = middle;
		middle = end;
	}
	return end;
	
}

int main()
{
	int n;
	while(scanf("%d",&n),n>=0)
	{
		printf("#%d: %llu\n",n,fi(n));
	}
}
