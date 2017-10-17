// evaluating series.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int JC( int n )
{
	int S=1;
	for(int i=1;i<=n;i++)
	{
		S=S*i;
	}
	return S;
}

int main(   )
{
	double ex=0,x,item;
	printf("x=");
	scanf("%lf",&x);
	for(int i=0;  ;i++)
	{
		
		item=pow(x,i)/JC(i);
		ex=ex+item;
		if( fabs(item)<1e-5 )
			break;
	}
	printf("%lf\n",ex);
	return 0;
}
