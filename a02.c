#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	long long int sum = 0;
	
	for(int i = a-b; i <= a+b; i++)
		sum += i;
	
	printf("%lld",sum);
	
}
