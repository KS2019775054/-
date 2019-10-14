#include <stdio.h>
#include <string.h>

int main() {
	
	int a;
	scanf("%d",&a);
	for (int i = 1 ; i <= a ; i++ )
	{
		for ( int j = 1 ; j <= i ; j++)
		{
			printf("%c",'A'+a-j);
		}
		printf("\n");
	}
	return 0;
}
