#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	printf("%d %d %d %d",n/86400,n%86400/3600,n%86400%3600/60,n%86400%3600%60);
	return 0;
}
