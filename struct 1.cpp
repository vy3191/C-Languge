// struct 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

struct student
{
	float math,ave;
	int number;
};

int main(  )
{
	struct student stu[3];
	float temp;
	for(int i=0;i<3;i++)
	{
		scanf("%f%d" , &stu[i].math, &stu[i].number);
		stu[i].ave=stu[i].math;
	}
	for(int j=0;j<3;j++)
	{
		for(int k=1;k<3-j;k++)
			if(stu[j].ave<stu[j+k].ave)
			{
				temp=stu[j].ave;
				stu[j].ave=stu[j+k].ave;
				stu[j+k].ave=temp;
			}
		printf("%f ",stu[j].ave);
	}
	printf("\n");
	return 0;
}
