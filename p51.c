#include <stdio.h>

int main()
{
	int a;
	double b,sum;
	scanf("%d %lf",&a,&b);
	if(a==1)
	{
		if(b>17850)
		{
			sum = 17850*0.15 + (b-17850)*0.28;
		}
		else
			sum = b * 0.15;
	}

	else if(a==2)
	{
		if(b>23900)
		{
			sum = 23900*0.15 + (b-23900)*0.28;
		}
		else
			sum = b * 0.15;
	}

	else if(a==3)
	{
		if(b>29750)
		{
			sum = 29750*0.15 + (b-29750)*0.28;
		}
		else
			sum = b * 0.15;
	}
	
	else if(a==4)
	{
		if(b>14875)
		{
			sum = 14875*0.15 + (b-14875)*0.28;
		}
		else
			sum = b * 0.15;
	}
	
	printf("%.2lf",sum);
}
