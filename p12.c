#include <stdio.h>

int main() {
	char a[100],b[100];
	int c,d,e;
	scanf("%s %s %d %d %d",a,b,&c,&d,&e);
	printf("\"%-10s %10s\"%8.1f",a,b,(c+d+e)/3.0);
	return 0;
}
