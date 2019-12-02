#include <stdio.h>

int main()
{
	char one,two,thr,save;
	int c= 0;
	while(scanf("%c",&thr), thr != '#')
	{
		if(one =='c' && two == 'a' && thr == 't')
			c++;
		
		one = two;
		two = thr;
	}
	printf("%d",c);
}
