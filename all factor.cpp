// yinzi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(   )
{
	int x;
	scanf("%d",&x);
	for(int i=1 ; i<x ; i++ )
	{
		if(x%i==0)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
