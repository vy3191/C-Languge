// robot hand.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include <stdio.h>
#include <math.h>

#define PI	3.1415926
#define N 10
// ���ýṹ�嶨��"��"����
struct Point
{	double x,y,z;	};

// ����"����"���ͣ� �����ĳ����У�Point��Vectorʵ������ͬһ����
// ���Ը�����Ҫ�ò�ͬ������
typedef  Point  Vector;

// ����ֱ���üӺţ����������ļӷ�����
Vector operator+( Vector a, Vector b)
{
	Vector c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

// ����ֱ���ü��ţ����������ļ�������
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

	// ���ܻ��õ��ı���
	Point hand, servo, key;
	Vector v, nv;

	// hand�ĳ�ʼλ��
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


