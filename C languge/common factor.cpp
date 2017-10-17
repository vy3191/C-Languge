// common factor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(  )
{
	int a,b,c,d,min,max;
	scanf("%d%d",&a,&b);
	if( a >= b )
	{	
		min=b;
		max=a;
	}
	else 
	{
		min=a;
		max=b;
	}
	for(int i=1;i<=min;i++)
	{
		if( a%i==0 && b%i==0 )
			c=i;
	}
	for(int j=max; ;j++ )
	{
		if( j%a==j%b )
		{
			printf("least common multiple:%d\n",j);
			break;
		}
	}
	printf("greatest common factor:%d\n",c);
	return 0;
}
