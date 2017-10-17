// triangle area.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>

#define  s( a,b,c )			(a+b+c)/2
#define  AREA( s,a,b,c )	sqrt(s*(s-a)*(s-b)*(s-c))

void main( )
{
	  double a, b, c, ss, area;
	  printf("Input a,b,c:");
	  scanf("%lf%lf%lf", &a, &b, &c );
	  if( a+b > c && a+c > b && b+c >a )
	  {
			ss = S( a,b,c );
			area = A REA( ss,a,b,c );
			printf("%lf\n", area );
	  }
	  else
			printf("data error\n");
}

