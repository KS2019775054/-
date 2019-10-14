#include <stdio.h>

int main() {
	float x;
	scanf("%f",&x);
	printf("Fixed-point notation: %f\n",x);
	printf("Exponential notation: %e\n",x);
	printf("p notation: %a",x);
	return 0;  
}
