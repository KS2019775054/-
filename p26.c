#include <stdio.h>

int main() {
	
	double f;
	scanf("%lf",&f);
	printf("Fahrenheit: %.2lf = Celsius: %.2lf = Kelvin: %.2lf",f,(5.0/9)*(f-32),(5.0/9)*(f-32)+273.16);
	return 0;
}
