#include <stdio.h>

int chk(int x[],int n)
{
	int b = x[0];
	for(int i = 0; i < n; i++)
	{
		if(b < x[i])
			b = x[i];
	}
	return b;
}

int main()
{
	int *a;
	a = (int *)malloc(sizeof(int) * 101000);
	int i = 0;
	while((scanf("%d",&a[i])) != EOF)
	{
		i++;
	}
	printf("%d",chk(a,i));
}
