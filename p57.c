#include <stdio.h>

void chk(double x,double y,double z)
{
	double v;
	if(x>y)
	{
		v = x;  // 20 10 5      10 20 5  		5 20 10  5 10 20
		x = y;
		y = v;
	}
	if(x>z)
	{
		v = x;
		x = z;
		z = v;
	}
	if(y>z)
	{
		v = y;
		y = z;
		z = v;
	}
	printf("%lf %lf %lf\n",x,y,z);
}

int main()
{
	double a,b,c;
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
		chk(a,b,c);
	
}
