// prime number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int isprime(int n)
{
	for(int i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main( )
{
	for(int i=1;i<998;i++)
	{
		if( isprime(i)==1 && isprime(i+2)==1)
			printf("%d %d\n",i,i+2);
	}
	return 0;
}
