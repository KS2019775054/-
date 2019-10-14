#include <stdio.h>

int main() {
	
	int a,b;
	scanf(" %d %d",&a,&b);
	for(long long int i= a; i<=b;i++)
		printf("%lld %lld %lld\n",i,i*i,i*i*i);
}
