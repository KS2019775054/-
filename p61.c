#include <stdio.h>
#include <stdlib.h>

int h(int end,int *c)
{
	int d=0;
	
	for(int j = 0; j<end ; j++)
	{
		if(c[j] > d)
			d = c[j];
	}
	return d;
}
int main()
{
	int b,i=0;
	int *a;
	a = (int*)malloc(100000* sizeof(int));
	
	while(scanf("%d",&b) != EOF)
	{
		a[i]=b;
		i++;
	}
	printf("%d",h(i,a));
}
