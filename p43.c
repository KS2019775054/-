#include <stdio.h>

int main() 
{
	int a;
	double	m,t;
	scanf("%d",&a);
	if(a>40)
		m = 40*10.0 + (a-40)*15.0;
		
	else
		m = a*10.0;
	
	if(m>300 && m <= 450)
		t = 300*0.15 + (m-300)*0.2;
	else if(m>450)
		t = 300*0.15 + 150*0.2 + (m - 450)*0.25;
	else 
		t = m *0.15;
		
	printf("%.2lf %.2lf %.2lf",m,t,m-t);
}
