#include <stdio.h>

int main() {
	int a,b,c,d,e,f;
	double x,y;
	scanf("%d %d %d %d %d %d",&e,&f,&a,&b,&c,&d);
	x = 1.0*(a*c+b*d)/(c*c+d*d);
	y = 1.0*(b*c-a*d)/(c*c+d*d);
	if(c==0 || d == 0)
		printf("X");
	else
		printf("%.2f %.2f",x+e,y+f);
	return 0;
}	
