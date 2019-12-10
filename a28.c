#include <stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	long long int a[61][61];

	for(int i = 0; i < 60 ; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if( i == j || j == 0)
			{
				a[i][j] = 1;
				continue;
			}
			else
				a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
	printf("%lld",a[n-1][k-1]);
	
}
