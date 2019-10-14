#include <stdio.h>

int main() {
	float x;
	scanf("%f",&x);
	printf("%.6e",x*950/(3.0*(1.0e-23)));
	return 0;
}
