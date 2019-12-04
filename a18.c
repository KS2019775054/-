#include <stdio.h>

int main()
{
	int n;
	double m,tex;
	scanf("%d %lf",&n,&m);
	
	if(n == 1)
	{
		if(m < 17850)
			tex = m * 0.15;
		else
			tex = (m-17850) * 0.28 + 17850*0.15;	
	}
	else if(n == 2)
	{
		
		if(m < 23900)
			tex = m * 0.15;
		else
			tex = (m-23900) * 0.28 + 23900*0.15;
	}
	else if(n == 3)
	{
		if(m < 29750)
			tex = m * 0.15;
		else
			tex = (m-29750) * 0.28 + 29750*0.15;
		
	}
	else
	{
		if(m < 14875)
			tex = m * 0.15;
		else
			tex = (m-14875) * 0.28 + 14875*0.15;
		
	}
	printf("%.2lf",tex);
}
