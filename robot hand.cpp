// robot hand.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include <stdio.h>
#include <math.h>

#define PI	3.1415926
#define N 10
// 利用结构体定义"点"类型
struct Point
{	double x,y,z;	};

// 定义"向量"类型， 在随后的程序中，Point和Vector实际上是同一类型
// 可以根据需要用不同的名字
typedef  Point  Vector;

// 可以直接用加号，进行向量的加法运算
Vector operator+( Vector a, Vector b)
{
	Vector c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

// 可以直接用减号，进行向量的减法运算
Vector operator-( Vector a, Vector b)
{
	Vector c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}

int main( )
{
	double length[N];
	double angle[N];
	int j, n,i;
	double r, theta;

	printf("Pls input the number of links:");
	scanf("%d",&n);
	printf("Pls input the length:");
	for(i=0;i<n;i++)
		scanf("%lf",&length[i]);
	printf("Pls input the angle:");
	for(i=0;i<n;i++)
		scanf("%lf",&angle[i]);

	// 可能会用到的变量
	Point hand, servo, key;
	Vector v, nv;

	// hand的初始位置
	hand.x = hand.y = hand.z = 0;
	for( j = 0;j < n; j++ )
		hand.z += length[j];

	servo.x = servo.y = 0;
	servo.z = hand.z;

	for( j = n - 1; j >= 0; j-- )
	{
		servo.z = servo.z - length[j];
		theta = angle[j] * PI / 180;

		if( j % 2 == 0 )
		{	
			double x1=hand.x-servo.x;
            double y1=hand.y-servo.y;
            double z1=hand.z-servo.z;
            double x2=x1*cos(theta)+z1*sin(theta);
            double y2=y1;
            double z2=z1*cos(theta)-x1*sin(theta);
            hand.x=x2+servo.x;
			hand.y=y2+servo.y;
            hand.z=z2+servo.z;

		}
		else
		{
			double x1=hand.x-servo.x;
            double y1=hand.y-servo.y;
            double z1=hand.z-servo.z;
            double x2=x1;
            double y2=y1*cos(theta)-z1*sin(theta);
            double z2=y1*sin(theta)+z1*cos(theta);
            hand.x=x2+servo.x;
            hand.y=y2+servo.y;
            hand.z=z2+servo.z;
		}
	}
	printf("robot's hand is at (%.3f,%.3f,%.3f)\n", hand.x, hand.y, hand.z);
	return 0;
}


