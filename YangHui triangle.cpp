// YangHui triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define N 100

void calc( int a[][N] ,int n)
{
	for(int m=0;m<n;m++)
		for(int k=0;k<=m;k++)
			a[m][k]=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0||i==j)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

void prt( int a[][N] ,int n )
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=i;j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}

}

int main(  )
{
	int a[N][N];
	calc(a,10);
	prt(a,10);
	return 0;
}
