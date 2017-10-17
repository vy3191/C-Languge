// diedai getroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(  )
{
	double x1,x2;
	int i;
	x1=1.5;
	for(i=0; ;i++)
	{
		x2=x1-(2*x1*x1*x1-4*x1*x1+3*x1-6)/(6*x1*x1-8*x1+3);
		if(fabs(x2-x1)<1e-6)
			break;
		x1=x2;
	}
	printf("%lf\n",x1);
	return 0;
}
