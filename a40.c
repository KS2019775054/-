#include <stdio.h>
#include <string.h>


int main()
{
	char a[10000];
	int r,g,b;
	r = g = b= 0;
	scanf("%s",a);
	
	for(int i = 0; i < strlen(a); i++)
	{
		if( a[i] == 'R')
			r++;
		else if(a[i] =='G')
			g++;
		else
			b++;
			
	}	
	printf("%d %d %d",r,g,b);
}
