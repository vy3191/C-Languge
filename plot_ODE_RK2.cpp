// plot_ODE_RK2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main( )
{
	float t,h,dfx,ddfx,y;
	h=0.01;
	y=11;
	for(t=2;t<=4;t=t+h)
	{
		dfx=t*t+3*t+1;
		ddfx=2*t+3;
		y=y+dfx*h+ddfx*h/2;
		printf("%.2lf %lf\n",t,y);
	}
	return 0;
}
