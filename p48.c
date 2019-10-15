#include <stdio.h>

int main() 
{
	int r1,r2,r3,r4,r5;
	double sum;
	scanf("%d %d %d %d %d",&r1,&r2,&r3,&r4,&r5);
	sum = r1 + 1.0/(1.0/(r2+r3) + 1.0/r4 ) + r5;
	printf("%.5lf",sum);
}
