#include <stdio.h> 
#include <stdlib.h>

int chk(void *a1,void *a2)
{
	if(*(int *) a1 > *(int *) a2)
		return 1;
	else if(*(int *) a1 < *(int *) a2)
		return -1;
	else 
		return 0;
}

int main()
{
	int n;
	int ma,nu,sum;
	sum = ma = nu = 1;
	int *a;
	a = (int *) malloc (sizeof(int) * 5000000);
	
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
		
	qsort(a,n,sizeof(int),chk);
	
	
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] == a[i+1])
		{
			ma ++;
			if( sum <=ma )
			{
				nu = a[i];
				sum = ma;
			}
		}
			
		else
			ma = 1;
	
			
	}
	printf("%d %d",nu,sum);
}
