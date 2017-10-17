// matrix multiplication.cpp : Defines the entry point for the console application.
//
#include <stdafx.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define  L  3
#define  M  4
#define  N  5


int main(int argc, char* argv[])
{
	int  a[L][M], b[M][N] = {1}, c[L][N]={0};
	int  i,  j,  k;
	srand(time(0));
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ",a[i][j]);
	}
	return 0;
}
