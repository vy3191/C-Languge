// mengtekanuo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <time.h>//srand()
#include <stdlib.h>//rand()
#include <math.h>
#define PI 3.14159
#define N 5000

int main(  )
{
	float x,y,S;
	int i=0;
	srand(time(0));
	for(int j=0;j<=N;j++)//Ö´ÐÐ´ÎÊý
	{
		y=(float)rand()/RAND_MAX;
		x=(float)rand()/RAND_MAX*PI;
		if(y<=sin(x))
		i++;
	}
	S=(float)i/N;
	printf("%f\n",S*PI*1);
	return 0;
}
