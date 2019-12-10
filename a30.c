#include <stdio.h>
#include <stdlib.h>

int chk(void *a1,void *a2)
{
	if(*(int *)a1 > *(int *)a2)
		return 1;
	else if(*(int *)a1 < *(int *)a2)
		return -1;
	else
		return 0;
}

int main()
{
	int n;
	int *a;
	a = (int *) malloc (sizeof(int) * 1000100);
	
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
		
	qsort(a,n,sizeof(int),chk);
	if(n%2==0)
		printf("%.1lf", (a[n/2]+a[n/2-1]) / 2.0);
	else
		printf("%d",a[(n-1)/2]);
}
