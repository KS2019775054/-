#include <stdio.h>
#include <string.h>

int main() {
	char a[100],b[100];
	int x,y;
	
	scanf("%s %s",a,b);
	
	printf("%s %s\n",a,b);
	
	if(strlen(a)>=10)
		x = strlen(a)-1;
	else
		x = strlen(a);
		
	if(strlen(b)>=10)
		y = strlen(b)-1;
		
	else
		y = strlen(b);
		
	for( int i = 1 ; i <x ;i++) 
		printf(" ");
		
	printf("%d ",strlen(a));
	
	for( int i = 1 ; i < y; i++)
		printf(" ");
		
	printf("%d\n",strlen(b));
	///////////////////////////////////////////
	
	printf("%s %s\n",a,b);
	
	printf("%d",strlen(a));
	
	for( int i = 0; i <x ; i++)
		printf(" ");
		
	printf("%d",strlen(b));
	return 0;
		
}
