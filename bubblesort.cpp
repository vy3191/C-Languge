// bubblesort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(  )
{
	int a[10],temp;
	srand(time(0));
	for(int i=0;i<=9;i++)
		a[i]=rand()%100;
	for(int k=0;k<=8;k++)
	{
		for(int j=0;j<=8-k;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int m=0;m<=9;m++)
		printf("%d ",a[m]);
	printf("\n");
	return 0;
}
