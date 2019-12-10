#include <stdio.h>

int chk(int n)
{
	int one,two,thr;
	one = 1;
	two = thr = 0;
	for(int i = 0; i < n; i++)
	{
		thr = two + one;
		one = two;
		two = thr;
	}
	return thr;
}


int main()
{
	int n;
	while(scanf("%d",&n), n != -1)
	{
		
	printf("#%d: %d\n",n,chk(n));
	
	
	}
}
