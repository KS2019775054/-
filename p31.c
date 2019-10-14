#include <stdio.h>

int main() {
	
	int a,b;
	long long c=0;
	
	scanf("%d",&a);
	for( int i = 0 ; i < a ; i ++)
	{
		scanf("%d",&b);
		
		c += b;
		
	}
	
	printf("%lld",c);
}
