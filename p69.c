#include <stdio.h>

int main()
{
	int *a;
	int n,b;
	int c,h,g,m;
	h = g = 0;
	a = (int *) malloc (sizeof(int) * 6000000);
	scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&b);
		a[i] = b;
	}
	for(int i = 0; i<n; i++)
	{
		c = a[i];
		if(a[i]!= 0)
		{
			for(int j = 0; j < n; j++)
			{
				if(a[j]==c)
				{
					h++;
				}
				
				if(g<h)
				{
					g = h;
					m = a[j];
				}
				if(a[j]==c)
				{
					a[j] = 0;
				}
			} 				
		}
		h = 0;
	}
	printf("%d %d",m,g);
}
