// RK2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main( )
{
	float yxx,yx,h,t,k,y,dy,dy1,K;
	y=2;
	h=0.01;
	for(t=1;t<=2;t=t+h)
	{
		dy=4-3*t-2*y;
		dy1=dy;
		yx=y+h*dy;
		dy=4-3*(t+h)-2*yx;
		K=dy1+dy;
		k=K/2;//  1/2*(dy1+dy)  ???
		yxx=y+h*k;
		y=yxx;
		printf("%.2lf %lf\n",t,yxx);
	}
	return 0;
}

