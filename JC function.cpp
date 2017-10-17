// JC function.cpp : Defines the entry point for the console application.
//

#include "stdio.h"

int JC(int n)
{
   int S;
   if(n==1)
     S=1;
   else 
     S=n*JC(n-1);
   return S;  
}

int main(  )
{
   int n;
   scanf("%d",&n);
   JC(n);
   printf("%d\n",JC(n));
   return 0;
}
