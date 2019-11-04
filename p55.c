#include <stdio.h>

void chline(ch, i, j)
{
	for(int k = 1; k<i ;k++)
		printf("+");
		
	for(int o = 0; o<=j-i ; o++)
		printf("%c",ch);
	
	for(int k = 1; k<i ;k++)
		printf("+");
	 
}

int main()
{
	char m;
	int st,ed;
	scanf(" %c %d %d",&m,&st,&ed);
	chline(m,st,ed);
}
