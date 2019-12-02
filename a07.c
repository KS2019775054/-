#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i = a; i <= b; i++)
	{
		
		printf("%d %.f %.f",i,pow(i*1.0,2.0),pow(i*1.0,3.0));
		putchar('\n');
		
	}
}
