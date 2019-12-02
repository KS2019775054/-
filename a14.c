#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int h,hp,w,wp,ws,hs;
	h = hp = w = wp = ws = hs = 0;;
	while(scanf("%d",&a), a != 0)
	{
		if(a%2 == 0)
		{
			w++;
			wp++;
			ws += a;
		}
		else
		{
			h++;
			hp++;
			hs += a;
		}
	}
	if(wp == 0)
		printf("0 0.00 %d %.2lf",h,(double)hs/hp);
	else if(hp==0)
		printf("%d %.2lf 0 0.00",w,(double)ws/wp);
	else
		printf("%d %.2lf %d %.2lf",w,(double)ws/wp,h,(double)hs/hp);
}
