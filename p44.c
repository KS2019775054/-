#include <stdio.h>

int main() 
{
	int a=0,n;
	scanf("%d",&n);
	for( int i = 2; i<=n/2;i++)
	{
		if(n%i==0)
			a++;
	}
	printf("%d",a);
}
