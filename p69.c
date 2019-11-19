#include <stdio.h>
#include <stdlib.h>

int mycomp(const void *p1,const void *p2)
{
	const int *a1 = ( const int *)p1;
	const int *a2 = ( const int *)p2;
	if(*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else 
		return 1;
}

int main()
{
	int *a;
	a = (int *) malloc (sizeof(int) * 5500000);
	int n,b,c,h,e;
	c =  e = 0;
	h = 1;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++)
	{
		scanf("%d",&b);
		a[i] = b;
	}
	qsort(a,n,sizeof(int),mycomp);
	
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] == a[i+1])
			h++;
		else
			h = 1;
		if(c <= h)
		{
			c = h;
			e = a[i];
		}
	
	}
	printf("%d %d",e,c);
	
}
