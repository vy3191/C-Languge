// Hermite function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

float H(float x,int n);

int main(  )
{
	int n;
	float x;
	printf("x="); scanf("%f",&x);
	printf("n(n>=2)="); scanf("%d",&n);
	H(x,n);
	printf("%f\n",H(x,n));
	return 0;
}

float H(float x,int n)
{
	float S;
	if(n==0)
		S=1;
	else 
	{
		if(n==1)
			S=2*x;
		else 
			S=2*x*H(x,n-1)-2*(n-1)*H(x,n-2);
	}
	return S;
}