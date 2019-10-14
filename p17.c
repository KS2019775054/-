#include <stdio.h>

int main() {
	float a,b;
	scanf("%f %f",&a,&b);
	
	printf("%.2fsec",(b*8)/a);
	
	return 0;
}
