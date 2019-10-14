#include <stdio.h>

int main() 
{
	double a,b;
	int n;
	scanf("%lf %lf %d",&a,&b,&n);
	for(int i = 0; i<n; i++)
	{
		a += a*b;
	}
	printf("%.5lf",a);
}
