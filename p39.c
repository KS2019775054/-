#include <stdio.h>

int main() 
{
	double x,y,r,sum;
	int c = 0;
	scanf("%lf %lf %lf",&x,&y,&r);
	sum = x;
	while( sum > 0)
	{	
		if(x*y/100 >= r)
		{
			printf("NO");
			break ; 
		}
		sum = sum + sum*(y/100)-r;
		c++;
	}
	if(x*y/100 < r)
		printf("%d",c);
}
