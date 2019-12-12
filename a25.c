#include <stdio.h>

unsigned long long int	 chk(int n)
{
	unsigned long long int	 fi,se,tr;
	se = tr = 0;
	fi = 1;	
	for(int i = 0; i < n; i ++)
	{
		tr = fi + se;
		fi = se;
		se = tr;
	}
	return tr;
}

int main()
{
	int n;
	while(scanf("%d",&n), n>=0)
		printf("#%d: %llu\n",n,chk(n));
}
