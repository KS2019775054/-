#include <stdio.h>

int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for( int i = 0; i<n;i++)
		scanf("%d",&a[i]);
		
	for(int j = 1; j<=n; j++)
		printf("%d ",a[n-j]);

	return 0;
}
