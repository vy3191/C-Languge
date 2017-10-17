// getroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main(  )
{
	float a,b,c,d,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
		printf("NO ANSWER\n");
	else
	{
		x1=(-b+sqrt(d))/2/a;
		x2=(-b-sqrt(d))/2/a;
		printf("x1=%lf x2=%lf\n",x1,x2);
	}
	return 0;
}

