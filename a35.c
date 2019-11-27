#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	
	int **a;
	a = (int **) malloc (sizeof(int*) * 1500);
	for(int i = 0; i < 1500 ; i++)
		a[i] = (int *) malloc (sizeof(int) * 1500);
	
	int n,m;
	scanf("%d %d",&n,&m);
	int r,t,sum=0,che=0;
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%1d",&a[i][j]);
		}
	}
	
	
	for(int i = 0; i < n-2;i++)
	{
		for(int j = 0; j < m-2; j++)
		{
			sum = a[i][j]+a[i][j+1]+a[i][j+2] +a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]  + a[i+2][j]+a[i+2][j+1]+a[i+2][j+2] - a[i+1][j+1];
				
			if(che < sum)
				che = sum;
			sum = 0 ;
		}
	}
	printf("%d",che);
}
