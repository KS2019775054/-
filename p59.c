#include <stdio.h>

void to_binary(unsigned long n,unsigned long w)
{
	int r;
	
	r = n % w;
	if(n>=w)
		to_binary(n/w,w);
	putchar('0'+r);
	return;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	to_binary(a,b);
}
