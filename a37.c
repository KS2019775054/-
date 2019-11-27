#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,p;
	scanf("%d %d %d",&n,&m,&p);
	
	int sum = 0;
	
	int **a;
	a = (int **) malloc (sizeof(int*) * 150);
	for(int i = 0; i < 150 ; i++)
		a[i] = (int *) malloc (sizeof(int) * 150);
	
	int **b;
	b = (int **) malloc (sizeof(int*) *150);
	for(int i = 0; i< 150; i++)
		b[i] = (int *) malloc (sizeof(int) *150);
		
	
	int **c;
	c= (int **) malloc (sizeof(int*) * 150);
	for(int i = 0; i < 150 ; i++)
		c[i] = (int *) malloc (sizeof(int) * 150);
	
		
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0; j < p; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	/*
	for(int k = 0; k < n*p; k++)
	{
		for(int i = 0; i < m;i++)
		{
			a[k][i] * b[i][k]
		}
	}*/
		
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for(int k = 0; k < m; k ++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
