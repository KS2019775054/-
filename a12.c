#include <stdio.h>

int main()
{
	double m,e,y;
	scanf("%lf %lf %lf",&m,&e,&y);
	
	for(int i = 0;  i< y ; i ++)
	{
		m = m + m*e ;
	}
	printf("%.5lf",m);
}
