#include <stdio.h>

void che( double *one,double *two,double *three)
{
	double save;
	if(*one > *two)
	{
		save = *one;
		*one = *two;
		*two = save;
	}
	if(*one > *three)
	{
		save = *one;
		*one = *three;
		*three = save;
	}
	if(*two > *three)
	{
		save = *two;
		*two = *three;
		*three = save;
	}
}

int main()
{
	
	double a,b,c;
	while((scanf("%lf %lf %lf",&a,&b,&c) == 3))
	{
		che(&a,&b,&c);
		printf("%lf %lf %lf\n",a,b,c);
			
	}
}
