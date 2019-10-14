#include <stdio.h>

int main() {
	int n;
	long long int a,b;
	a = b = 0;
	scanf("%d",&n);
	for ( int i = 0; i<n; i++)
	{
		b += 1000;
		a =  a + b;
		
	}
	printf("%lld",a);
	
	return 0;
}
