#include <stdio.h>
#include <stdlib.h>

int mycomp(const void *p1,const void *p2)
{
	int *a1 = ( int *)p1;
	int *a2 = (  int *)p2;
	if(*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else 
		return 1;
}



int main()
{

	int *a,n;

	a = ( int *) malloc (sizeof( int) * 1500000);
	
	scanf("%d",&n);
	
	for( int i = 0; i<n; i++)
		scanf(" %d",&a[i]);
		
	
	
	/*
	0 1 2 3 4 5 6
	1 2 3 4 5 6 7
	
	0 1 2 3 4 5 6 7
	1 2 3 4 5 6 7 8
	*/
	qsort(a,n,sizeof(int),mycomp);

	if(n%2==0)
	{
		if(a[(n-2)/2]+a[(n)/2] == 0)
			printf("0.0");
		else
			printf("%.1f",(a[(n-2)/2]+a[(n)/2])/2.0);
	}
	else
		printf("%d",a[(n-1)/2]);
	
}
