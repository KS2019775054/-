#include <stdio.h>

double c(double x,double y)
{
	double sum, s = (1.0/x+1.0/y)/2.0;
	sum = 1.0/s;
	return sum;
	
}


int main()
{
	double a,b,f;
	while(scanf("%lf %lf",&a,&b)==2)
	{
		f = c(a,b);
		printf("%.3lf\n",f);
	}
	
}
