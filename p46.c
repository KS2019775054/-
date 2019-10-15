#include <stdio.h>
#include <math.h>

int main() 
{
	int n,a,b;
	scanf("%d",&n);
	a = b = 0;
	if(n>=2)
		a++;
	for(int i = 3; i<=n;i+=2)
	{
		for(int j = 3; j<=sqrt(i);j+=2)
		{
			if(i%j==0)
				b++;
				
		}
		if(b==0)
			a++;
		b = 0;
	}
	
	printf("%d",a);
}
