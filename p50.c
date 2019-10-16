#include <stdio.h>


int main() 
{
	int a,b,c,d;
	int A,B,C,D,G,F=0;
	int v,w,x,y,z; //00001 00010 00011 00100 00101 00110 00111 01000 01001 01010 01011 01100 01101 01110 01111 10000
	scanf("%d %d %d",&a,&b,&c);
	for(int i = 0; i<=31 ; i++)
	{
		v = i/16;
		w = i%16/8;
		x = i%16%8/4;
		y = i%16%8%4/2;
		z = i%16%8%4%2;
	
		////////////////
		D = x & y;
		if(D ==0)
			D = 1;
		else if(D==1)
			D = 0;
		////////////////////
		if(a==1)
			A = v | w;
		else if(a==2)
			A = v & w;
		else if(a==3)
		{
			A = v | w;
			if(A==0)
				A=1;
			else
				A=0;
		}
		else if(a==4)
		{
			A = v & w;
			if(A==0)
				A=1;
			else
				A=0;
		}
		else if(a==5)
			A = v ^ w;

		/////////////////////////
		if(b==1)
			B = y | z;
		else if(b==2)
			B = y & z;
		else if(b==3)
		{
			B = y | z;
			if(B==0)
				B=1;
			else
				B=0;
		}
		else if(b==4)
		{
			B = y & z;
			if(B==0)
				B=1;
			else
				B=0;
		}
		else if(b==5)
			B = y ^ z;	
		/////////////////////////////
		if(c==1)
			C = D | B;
		else if(c==2)
			C = D & B;
		else if(c==3)
		{
			C = D | B;
			if(C==0)
				C=1;
			else
				C=0;
		}
		else if(c==4)
		{
			C = D & B;
			if(C==0)
				C=1;
			else
				C=0;
		}
		else if(c==5)
			C = D ^ B;	
		///////////////
		G = A | D ;
		if(G==0)
			G=1;
		else if(G==1)
			G =0;
		////
		if(G^C==1)
			F++;
		/*printf("%d %d",A,B);
		printf("  %d %d %d %d %d\n",v,w,x,y,z);*/
	}
	printf("%d",F);
}
