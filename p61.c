#include <stdio.h>

int a[1000000];
int h(int b)
{
	int c;
	
	for(int j = 0; j<=b ; j++)
	{
		if(a[j] > c)
			c = a[j];
	}
	return c;
}
int main()
{
	int b,i=0,c=0;
	while(scanf("%d",&b) != EOF)
	{
		
		a[i]=b;
		i++;
	}
	printf("%d",h(i));
}
