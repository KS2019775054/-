#include <stdio.h>

int main()
{
	int n;
	int a[1010];
	scanf("%d",&n);
	for(int i = 0 ; i < n; i ++)
		scanf("%d",&a[i]);
		
	for(int i = 0; i < n; i ++)
		printf("%d ",a[n-i-1]);
}
