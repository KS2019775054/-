#include <stdio.h>

int main() {
	
	int a;
	
	scanf("%d",&a);
	
	while(a>0)
	{
		printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n",a,a/60,a%60);
		scanf("%d",&a);
	}
	
	return 0;
}
