#include <stdio.h>


double H(double x[], int n)
{
	double under = 0;
	for(int i = 0; i < n; i++)
		{
			
			under += 1.0/x[i];
			
		}
	double h = n/under;
	return h;
}


int main()
{
	int n,i=0;
	char ch;
	double a[1020];
	double under;
	under = 0;
	while((scanf("%d",&n)), n != 0)
	{
		for(int i = 0; i < n; i ++)
		{
			scanf("%lf",&a[i]);	
		}
		
		printf("%.3lf\n",H(a,n));
	}	
	
}
