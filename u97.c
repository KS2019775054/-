#include <stdio.h>

int main()
{
	long long int sum=1;
	int a,n;
	scanf("%d",&a);
	n = (a+1)/2;
	for(int i = 0; i < n; i++)
	{
		sum = sum*2;
		if(sum>16769023)
			sum = sum%16769023;
	}	
	printf("%lld",sum);
}
