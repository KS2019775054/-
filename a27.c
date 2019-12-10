#include <stdio.h>

int mycomp( void *a1 , void *a2)
{
	if(*(int*) a1 > *(int*) a2)
		return 1;
	else if(*(int*) a1 < *(int*) a2)
		return -1;
	else 
		return 0;
}

int main()
{
	int n;
	int *a;
	a = (int *) malloc (sizeof(int) * 1500000);
	
	scanf("%d",&n);
	for(int i= 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),mycomp);
	printf("%d",a[1]);
}
