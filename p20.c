#include <stdio.h>

int main() {
	double k;
	scanf("%lf",&k);
	printf("%.2lf %.2lf",(k-273.16)*(9.0/5)+32,k-273.16);
	return 0;
}
