#include <stdio.h>
#include <stdlib.h>
int main()
{
	int **a;
	int sum = 0;
	int chk,day = 0;
	a = (int **) malloc (sizeof(int *) * 1010);
	for(int i=0; i< 1010; i++)
		a[i] = (int *) malloc (sizeof(int) * 1010);
	
	int x,y;
	scanf("%d %d",&x,&y);
	
	for(int i = 0; i < x; i++)
	{
		for( int j = 0; j < y; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	chk = 0;
	for(int i = 0; i < x; i++)
	{
		for( int j = 0; j < y; j++)
		{
			sum += a[i][j];
		}
		
		if(chk <= sum)
		{
			chk = sum;
			day = i;
		}
		sum = 0;
	}
	
	printf("%d %d\n",day+1,chk);
	
	day = chk = 0;
	
	for(int i = 0; i < y; i++)
	{
		for( int j = 0; j < x; j++)
			sum += a[j][i];
		
		if(chk <= sum)
		{
			chk = sum;
			day = i;
		}
		sum = 0;
	}
	
	printf("%d %d",day+1,chk);
}
