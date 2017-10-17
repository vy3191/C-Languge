// dichotomy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(  )
{
	double a,b,m,fm,fa,fb;
	a=-10,b=10;
	for(int i=0; ;i++)
	{
		m=(a+b)/2;
		fm=2*m*m*m-4*m*m+3*m-6;
		fa=2*a*a*a-4*a*a+3*a-6;
		fb=2*b*b*b-4*b*b+3*b-6;
		if(fa*fm<0)
			b=m;
		else 
			a=m;
		if(fabs(b-a)<1e-6)
			break;
	}
	printf("%lf\n",a);
	return 0;
}
