#include <stdio.h>
#include <stdlib.h>

int mycomp(void *p1, void *p2)
{
	int *a1 = (int *) p1;
	int *a2 = (int *) p2;
	
	if(*a1<*a2)
		return -1;
	else if(*a1==*a2)
		return 0;
	else
		return 1;
}


int main()
{
	int n,m;
	
	int *a;
	double j,b;
	j = b = 0;
	a = (int *) malloc (sizeof(int) * 120000);
	scanf("%d %d",&n,&m);
	
	for(int i = 0; i < n ; i++)
		scanf("%d",&a[i]);
	
	qsort(a,n,sizeof(int),mycomp);
	
	
		
	for(int i = 0; i< n ; i++)
		printf("%d  ",a[i]);
	
	putchar('\n');
	
	for(int i = m; i<n-m; i++)
	{
		j += a[i];
	}
	
	
	putchar('\n');
	
	for(int i = 0; i<m; i++)
	{
		a[i] = a[m];
	}
	for(int i = n-m; i< n;i++)
	{
		a[i] = a[n-m-1];
	}
	
	for(int i = 0; i< n ; i++)
		printf("%d  ",a[i]);
	
	for(int i = 0; i<n;i++)
	{
		b += a[i];
	}
	putchar('\n');
	
	printf("%.1lf %.1lf",j/(n-(2*m)),b/n);
	
}
