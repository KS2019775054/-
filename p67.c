#include <stdio.h>

int main()
{
	int n,c=0;
	long long int q,w,e,r;
	w=e=1;
	r=0;
	scanf("%d\n",&n);
	int a[10000];
	r = n;
	for(int i = 0 ; i < n*n; i++)
	{
		
		scanf("%lld",&q);
		a[i] = q;
		
	}
	//for(int i = 0 ; i < n*n; i++)
	//	printf("%d",a[i]);
	for(int i =0; i<n*n;i+=n+1)
		w *=a[i];
	
	for(int i =n-1; i<n*n-(n-1); i+=n-1){
		
		
		e *=a[i];
		
	}
	
	printf("%lld",w-e);
	
}
