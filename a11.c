#include <stdio.h>
#include <math.h>

int main()
{
	double a,sum = 0;
	int n;
	scanf("%lf %d",&a,&n);
	for(int i = 1; i <= n; i++)
	{
		if(i%2 == 1)
			sum += pow(a,i)/i;
		else
			sum -= pow(a,i)/i;
	}
	printf("%.5lf",sum);
}
