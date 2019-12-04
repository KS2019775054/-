#include <stdio.h>

int main()
{
	int n,p,psum;
	char ch;
	double sum,tex;
	psum = sum = 0;
	
	scanf("%d",&n);
	
	for(int i = 0; i < n ; i++)
	{
		scanf(" %c %d",&ch,&p);
	
		if(ch =='a')
		{
			
			sum += 2.05 * p;
			psum += p;
			
		}
		else if(ch == 'b')
		{
			
			sum += 1.15 * p;
			psum += p;
			
		}
		else
		{
			
			sum += 1.09 * p;
			psum += p;
			
		}
	}
	if(sum >= 100)
		sum = sum*0.95;
	if(psum < 5)
		tex = 6.50;
	else if(psum<20)
		tex = 14;
	else	
		tex = 14 + psum*0.5;
	
	printf("%.2lf",sum+tex);
	
}
