#include <stdio.h>
#include <math.h>

int a[10000001];

int main()
{
	int n,all=0;
	scanf("%d",&n);
	a[0]=a[1]=0;
	for(int i = 2; i < n; i++)
	{
		a[i]=1;
	}
	for(int j = 2; j <=sqrt(n) ; j++)////////////10000 ют╥б  100   50  
	{
		for( int k = 2; k<= n/j ; k++)
		{
			if(a[j]==1)
			{
				a[j*k]=0;
				
			}
		}
		
	}
	for(int u= 4 ; u<n; u++)
	{
		if(a[u]==1)
			all++;
	}
	printf("%d",all+2);
	
}
