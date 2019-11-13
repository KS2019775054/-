#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int n,m;
	char q,w;
	long long int c,end;
	c=end=0;
	char A[30000] ,B[30000];
	scanf("%lld %lld\n",&n,&m);
	for(int i = 0; i < n ;i++)
	{
		scanf("%c",&q);
		A[i] = q;
	}
	for(int i = 0; i < m ;i++)
	{
		scanf(" %c",&w);
		B[i] = w;
	}
	
	for(int i = 0; i< n;i++)
	{
		c = 0;
		for(int j =0;j<m;j++)
		{
			if(A[i+j]=='S'&& B[j]=='R')
				c++;
			else if(A[i+j]=='R'&& B[j]=='P')
				c++;
			else if(A[i+j]=='P'&& B[j]=='S')
				c++;
		}
		if(end < c)
			end = c;
	}
	printf("%lld",end);
	
}
