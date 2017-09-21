#include "stdio.h"

int main()
{
	float t,h,dfx,y;
	h=0.01;
	y=11;
	for(t=2;t<=4;t=t+h)
	{
		dfx=t*t+3*t+1;
		y=y+dfx*h;
		printf("%.2lf %lf\n",t,y);
	}
	return 0;
}