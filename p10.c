#include <stdio.h>
#include <string.h>

int main() {
	char a[30],b[30];
	int c,one,two;
	scanf("%s %s %d",a,b,&c);
	printf("%d %d",strlen(a)+strlen(b),c);	
	return 0;
}
