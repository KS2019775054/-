#include <stdio.h>

int main() 
{
	char a,b[1000];
	int s,i;
	s=i=0;
	a = getchar();
	while(a!='#')
	{
		b[i]=a;
		i++;
		a = getchar();
		
	} 

	for(int j =0; j<i;j++)
	{
		if(b[j]=='e' && b[j+1]=='i')
			s++;	
	}
	printf("%d",s);
}
