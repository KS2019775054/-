#include <stdio.h>
#include <stdlib.h>

int chk(void *a1,void *a2)
{
	if(*(int*) a1 > *(int*) a2)
		return 1;
	else if(*(int*) a1 <  *(int*) a2)
		return -1;
	else
		return 0;	
}

int main()
{
	int n,k;
	int *a;
	a = (int *) malloc (sizeof(int) * 100100);
	double js,bj;
	js = bj = 0;
	scanf("%d %d",&n,&k);
	
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
		
	qsort(a,n,sizeof(int),chk);	
	
	
	for(int i = k; i < n-k; i++)
		js += a[i];
	
	for(int i =0; i < k; i++)
		a[i] = a[k];
	for(int i =n-k ; i < n; i++)
		a[i] = a[n-k-1];
	for(int i = 0; i < n; i++)
		bj += a[i];
	printf("%.1lf %.1lf",js/(n-(2*k)),bj/n);
	
}
