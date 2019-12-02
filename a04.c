#include <stdio.h>

int main()
{
	double a;
	
	scanf("%lf",&a);
	
	printf("Fahrenheit: %.2lf = Celsius: %.2lf = Kelvin: %.2lf",a,(a-32)*(5.0/9),(a-32)*(5.0/9) + 273.16);
}
