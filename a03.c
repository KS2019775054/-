#include <stdio.h>

int main()
{
	int c = 1000;
	int n;
	scanf("%d",&n);
	long long int sum = 0;
	
	for(int i = 0; i<n;i++)
	{
		sum += c;
		c +=1000;
	}
	printf("%lld",sum);
}
