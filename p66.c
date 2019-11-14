#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,x,y;
	int xc,yc,sum,ch,u,d,c,s;
	u = d = s = 0;
	scanf("%d",&n);
	c = n;
	int a[20000];
	
	for(int i = 0; i < n*2 ; i+=2)
	{
		scanf(" %d %d",&x,&y);
		a[i] = x;
		a[i+1] = y;
	}
	sum = abs(a[0]-a[2]) + abs(a[1]-a[3]);
	for(int i = 0; i<n;i++)
	{
		d=2;
		for(int j = 0; j < c-1; j++)
		{
			xc = abs(a[u]-a[d+s]);
			yc = abs(a[u+1]-a[d+1+s]);
		//printf("%d-%d // %d-%d -> %d + %d ====%d\n",a[u],a[u+1],a[d+s],a[d+1+s],xc,yc,xc+yc);
			if(sum < xc+yc)
				sum = xc+yc;
			d+=2;
			
		}
		s+=2;
		u+=2;
		c--;
		
	}
	printf("%d",sum);
}
