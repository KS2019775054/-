#include <stdio.h>

int main()
{
	int n,h,c=0;
	double sum =0,s=0;
	char m;
	scanf("%d",&n);
	
	for(int i =0;i<n;i++)
	{
		scanf(" %c %d",&m,&h);
		if(m=='a')
			sum += 2.05*h;
		else if(m=='b')
			sum += 1.15*h;
		else if(m=='c')
			sum += 1.09*h;
		c += h;
	}	
	if( c < 20 && c >=5)
		s = 14.0;
	else if(c>=20)
		s = 14.0 + c*0.50;
	else
		s = 6.5;
	if(sum >=100)
		sum = sum*0.95;
	
	printf("%.2lf",sum+s);
}
