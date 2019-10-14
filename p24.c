#include <stdio.h>

int main() {
	int n,m;
	long long int sum;
	scanf("%d %d",&n,&m);

	
	sum = 0;
	
	for(int i = n - m ; i <= n + m ; i++)
		sum += i;
		
	printf("%lld",sum);
	return 0;
}
