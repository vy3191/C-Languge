// use pointer getroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

void getroot(float a, float b,float c,float *px1 ,float *px2 )
{
	float d;
	d=b*b-4*a*c;
	if(d<0)
		printf("NO ANSWER\n");
	else
	{
		*px1=(-b+sqrt(d))/2/a;
		*px2=(-b-sqrt(d))/2/a;
	}
}

int main(   )
{
    float  x1,  x2 ;
    getroot( 1, -5,  6 ,  &x1,  &x2  );
    printf("%f %f\n", x1 , x2 );
	return 0;
}

