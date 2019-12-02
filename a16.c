#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double mon,tex;
	if(n < 40)
		mon = n * 10;
	else
		mon = 40 * 10 + (n-40)*15;
		
	if(mon  < 300)
		tex = mon * 0.15;
	else if(mon < 450)
		tex = 300*0.15 + (mon-300)*0.2;
	else
		tex = 300 * 0.15 + 150*0.2 + (mon-450)*0.25;
	printf("%.2lf %.2lf %.2lf",mon,tex,mon-tex);
}
