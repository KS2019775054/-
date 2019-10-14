#include <stdio.h>
#include <string.h>

int main() {
	char a[1000];
	int len;
	scanf("%s",a);
	len = strlen(a);
	
	for( int i = 1 ; i <= len ; i++)
		printf("%c",a[len-i]);
	
	
} 
