// lifanghe2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(   )
{
	int a,b,c,i;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i%100/10;
		c=i%100%10;
		if(i==a*a*a+b*b*b+c*c*c)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
