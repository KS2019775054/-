#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	double s,x;
	scanf("%d %d %d",&a,&b,&c);
	s = (a+b+c)/2.0;
	x = sqrt(s*(s-a)*(s-b)*(s-c));
	
	if(a+b >= c && a+c >= b && b+c >= a)
		printf("%.2lf",x);
	else
		printf("Not a Triangle");
	
	return 0;
}	
