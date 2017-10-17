// plot_Euler_2order.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main( )
{
	float z1,z2,y,t,h;
	z1=4;
	y=2;
	h=0.01;
	for(t=1;t<=2;t=t+h)
	{
		z2=9*t+9+3*y-7*z1;
		printf("t=%.2lf  y(%.2lf)=%lf\n",t,t,y);
		y=y+h*z1;
		z1=z1+h*z2;	
	}
	return 0;
}

