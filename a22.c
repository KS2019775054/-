#include <stdio.h>

double H(double x[], int n)
{
	double sum = 0;
	double all;
	for(int i = 0; i < n ; i++)
	{
		sum += (1.0/x[i]);
	}
	all = n/sum;
	return all;
}

int main()
{
	int n;
	double a[10000];
	
	while(scanf("%d",&n),n!=0)
	{
		
	
	for(int i = 0; i < n; i++)
	{
		scanf("%lf",&a[i]);
	}
	
	printf("%.3lf\n",H(a,n));
	}
		
}
