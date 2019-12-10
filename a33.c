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
	int n,k1,k2,k3;
	scanf("%d %d %d %d",&n,&k1,&k2,&k3);
	
	int *a;
	a = (int *) malloc (sizeof(int) * 13100000);
	
	for(int i =0; i< n; i++)
		scanf("%d",&a[i]);
	
	qsort(a,n,sizeof(int),chk);	
	
	printf("%d",a[k1-1]+a[k2-1]+a[k3-1]);
	
}
