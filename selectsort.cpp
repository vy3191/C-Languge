// selectsort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(  )
{
	int a[10],t,n=10;
	srand(time(0));
	for(int k=0;k<=9;k++)
		a[k]=rand()%100;
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			if(a[j] < a[i]) 
			{
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
		}
	}
	for(int m=0;m<=9;m++)
	{
		printf("%d ",a[m]);
	}
	printf("\n");
	return 0;
}
