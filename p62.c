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
