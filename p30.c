#include <stdio.h>
#include <string.h>

int main () {
	
	char a;
	int down,n;
	scanf(" %c",&a);
	n = a - 64;
	down = n -1;
	for(int i = 1; i <= n ; i ++)
	{
		for(int u = 0; u < down ; u ++)
			printf("-");
			
		for(int y = 0; y < i ; y++)
			printf("%c",'A'+y);
		
		for(int t = 1 ; t <= i-1 ; t++)
			printf("%c",'A'+i-t-1);
			
		printf("\n");
		down--;	
			
	} 
	
	
}
#include <stdio.h>

int main()
{
	char a,n;
	int down;
	scanf("%c",&a);
	n = a-64;
	down = n;
	for(int i = 1; i<=n;i++)
	{
		for(int k=1;k<down;k++)
			printf("-");
		for(int j=1;j<=i;j++)
			printf("%c",'A'+j-1);
		for(int l=1;l<i;l++)
			printf("%c",'A'+i-l-1);
		printf("\n");
		down--;
	}
}
