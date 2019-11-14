#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,t;
	int *a = (int*)malloc(3000000*sizeof(int));
		
	int sum,end;
	int m,q;
	sum = end = 0;
	scanf("%d %d",&t,&r);
	
	for(int i = 0; i<t*r;i++)
	{
		scanf("%d",&q);
		a[i]=q;
		
	}
	for(int i = 0; i < t ; i++)
	{
		for(int j = 0; j < r; j++)
		{ 
			sum += a[i*r+j];
		}
		if(end <= sum)
		{
			end = sum;	
			m = i+1;
		} 
		sum = 0;
	}
	printf("%d %d\n",m,end);
	m = 0;
	sum = 0;
	end = 0;
	for(int i = 0; i < r ; i++)
	{
		for(int j = 0; j < t*r; j+=r)
		{ 
			sum += a[i+j]; /////////0 r 2r 3r
		}
		if(end <= sum)
		{
			end = sum;	
			m = i+1;
		} 
		sum = 0;
	}
	
	printf("%d %d\n",m,end);
	
}
