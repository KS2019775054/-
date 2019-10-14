#include <stdio.h>

int main() {
	int a,b;
	long long int sum = 0;
	scanf("%d %d",&a,&b);
	while( a<b)
	{
		for(int i = a ; i <=b; i++)
		{
			sum = sum + i*i;
		}
		printf("%lld\n",sum);
		scanf("%d %d",&a,&b);
		sum = 0;
	}
}
