#include <stdio.h>

int main()
{
	int a,b,n,w,c=0;
	int x,y;
	scanf("%d %d %d %d",&a,&b,&n,&w);
	for(int i = 1; i < n; i++)
	{
		if(a*i+b*(n-i)==w)
		{
			x = i;
			y = n-i;
			c++;
		}
		
	}
	if(c!=1)
		printf("-1");
	else
		printf("%d %d",x,y);
}
