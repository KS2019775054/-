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
	
	int n,b;
	int *a;
	
	int one,two,three;
	a = (int *) malloc (sizeof(int) * 2000000 );
	
	scanf("%d %d %d %d",&n,&one,&two,&three);
	
	for(int i = 0; i< n ; i++)
	{
		scanf("%d",&b);
		a[i] = b;
	}
	
	qsort(a,n,sizeof(int),mycomp);
	printf("%d",a[one-1]+a[two-1]+a[three-1]);
}
