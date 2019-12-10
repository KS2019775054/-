#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int x,y;
	x = y = 0;
	
	int **a;
	a = (int **) malloc (sizeof(int *) * 10010);
	for(int i = 0; i < 10010; i++)
		a[i] = (int *) malloc (sizeof(int) * 3);
	scanf("%d",&n);
	
	for(int i =0; i< n; i++)
	{
		for(int j =0; j<=1; j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	
	for(int i =0; i < n; i++)
	{
		for(int j = i+1;  j < n; j++)
		{
			x = abs(a[i][0] - a[j][0])+abs(a[i][1] - a[j][1]);
			if( y <= x)
				y = x;
		}
	}
	printf("%d",y);
}
