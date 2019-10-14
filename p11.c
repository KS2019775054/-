#include <stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%.2f%%",100.0*d/(a+b+c+d));
	return 0;
}
