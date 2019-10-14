#include <stdio.h>

int main() {
	float x;
	scanf("%f",&x);
	printf("%f cups are equivalent to each of the following:\n",x);
	printf("%f pints\n",x/2);
	printf("%f tablespoons\n",x*16);
	printf("%f teaspoons",x*48);
	return 0;
}
