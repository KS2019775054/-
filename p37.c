#include <stdio.h>

int main() 
{
	int a;
	double b,c;
	b = c = 0;
	scanf("%d",&a);
	for ( int i = 1 ; i <= a ; i++)
	{
		b += 1.0/i;
		if( i%2==1)
			c += 1.0/i;
		else
			c -=1.0/i;
	}
	printf("%.5lf %.5lf",b,c);
}
