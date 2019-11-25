#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	
	while(scanf("%lf %lf %lf",&a,&b,&c) == 3)
	{
		
		if(b*b - 4*a*c > 0)
			printf("%.3lf %.3lf\n",((-1)*b + sqrt(b*b-4*a*c))/(2*a), ((-1)*b - sqrt(b*b-4*a*c))/(2*a));
	
		else if(b*b - 4*a*c == 0)
			printf("%.3lf\n",((-1)*b)/(2*a));
		else
			printf("Imaginary root\n");
		
	}
}
