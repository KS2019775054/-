#include <stdio.h>


int a[1000000];
int main()
{
	int b,i=0,c=0;
	while(scanf("%d",&b) != EOF)
	{
		
		a[i]=b;
		i++;
	}
	for(int j = 0; j<=i ; j++)
	{
		if(a[j] > c)
			c = a[j];
	}
	printf("%d",c);
}
