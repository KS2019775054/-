#include <stdio.h>

void c(double x,double y)
{
	double s = (1.0/x+1.0/y)/2.0;
	printf("%.3lf \n",1.0/s);
}


int main()
{
	double a,b;
	while(scanf("%lf %lf",&a,&b)==2)
		c(a,b);
	
}
