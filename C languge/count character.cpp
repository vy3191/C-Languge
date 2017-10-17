// count character.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <ctype.h>

int main(  )
{
	char a;
	for(int i=0; ; )
	{
		scanf("%c",&a);
		if( isalpha(a)!=0 )
			i++;
		else if( a == 46)//46 ASCII .
			break;
	}
	printf("%d\n",i);
	return 0;
}
