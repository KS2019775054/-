#include <stdio.h>

int main()
{
	int a,b;
	long long int sum;
	while ( scanf("%d %d",&a,&b),a < b)
	{
		sum = 0;
		for(int i = a ; i<= b; i++)
			sum += i*i;
		
		printf("%lld\n",sum);
	}
}
