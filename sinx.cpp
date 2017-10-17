// sinx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#define dx 0.01

int main(  )
{
	float S,a,b,n;
	S=0;
	a=0;
	b=3.14;
	n=b-a;
	for( int i=1;i*dx<=n;i++  )
	{
		S=S+sin(i*dx)*dx;
	}
	printf("%f\n",S);
	return 0;
}
