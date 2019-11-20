#include <stdio.h>


int a[1000000];
int main()
{
	int b,c= 10000000,d= 10000000,n;
	scanf("%d",&n);
	for(int i = 0; i<n ; i++){
	
		scanf("%d",&b);
		a[i]=b;
	
	}
	for(int j = 0; j<n ; j++)
	{
		if(a[j] < c)
			c = a[j];
	}
	
	for(int k = 0; k<n ; k++)
	{
		if(a[k] == c)
			continue;
		if(a[k] < d)
			d = a[k];
	}
	printf("%d",d);
	
	
}




//정렬버전

#include <stdio.h>
#include <stdlib.h>

int mycomp(void *p1,void *p2)
{
	int *a1 = (int *)p1;
	int *a2 = (int *)p2;
	if(*a1<*a2)
		return -1;
	else if( *a1 == *a2)
		return 0;
	else
		return 1;
}

int main()
{
	int n;
	int *a;
	a = (int *) malloc(sizeof(int)*1200001);
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),mycomp);
	printf("%d",a[1]);
}
