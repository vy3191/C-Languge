// getchar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int c;
	while((c=getchar( ))!=EOF)
		putchar(c);
	return 0;
}
