// lifanghe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(  )
{
	int x,a,b,c,z;
	scanf("%d",&x);
	a=x/100;
	b=x%100/10;
	c=x%100%10;
	z=a*a*a+b*b*b+c*c*c;
	printf("%d\n",z);
	return 0;
}

