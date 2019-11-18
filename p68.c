#include <stdio.h>
#include <stdlib.h>

long long int mycomp(const void *p1,const void *p2)
{
	long long int *a1 = ( long long int *)p1;
	long long int *a2 = ( long long int *)p2;
	if(*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else 
		return 1;
}



int main()
{
	long long int *a,b,n;

	a = (long long int *) malloc (sizeof(long long int) * 7000000);
	
	scanf("%lld",&n);
	
	for(long long int i = 0; i<n; i++)
	{
		scanf("%lld",&b);
		a[i] = b;
	}
	
	
	qsort(a,n,sizeof(long long int),mycomp);

	if(n%2==0)	
		printf("%.1lf",(a[(n/2)-1]+a[(n)/2])/2.0);
	else
		printf("%lld",a[n/2]);
	
}


