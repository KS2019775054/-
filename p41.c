#include <stdio.h>

int main()
{
	int a;
	double w,wp,g,gp,wc,gc;
	w = wp = g = gp = wc = gc = 0;
	scanf("%d",&a);
	
	while(a!=0)
	{
		if(a%2 == 0)
		{
			wc++;
			w+=a;
		}
		else
		{
			gc++;
			g += a;
		}
		
		scanf("%d",&a);
	}
	if(wc==0)
		wp = 0;
	else
		wp = w/wc;
	if(gc==0)
		gp = 0;
	else
		gp = g/gc;
	
	
	printf("%.lf %.2lf %.lf %.2lf",wc,wp,gc,gp);
}
