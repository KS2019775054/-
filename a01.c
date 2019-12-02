#include <stdio.h>

int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	
	printf("%.1lf mpg or %.1lf liters / 100Km.", a/b, 100*(b*3.785)/(a*1.609 ));
}
