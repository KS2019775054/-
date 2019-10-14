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
