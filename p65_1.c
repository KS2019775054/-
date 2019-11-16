#include <stdio.h>


long long int a[10000][10000];

int main()
{
	a[0][0] = 1; 
	
	int n,r;
	scanf("%d %d",&n,&r);
	
	for(int i = 1; i < 61; i++)
	{
		for(int j = 1; j<=i ; j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			
		}
	}
	
	printf("%lld",a[n][r]);
	
	
} 
