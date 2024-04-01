/******************************************************************
 * 100-prime_factor.c
 * prime_factor()-prints the prime factors of a given number
 * Return-void
 * *****************************************************************/

#include "main.h"

void prime_factor(long int n)
{
	long int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			n=n/i;
			i--;
		}
		
	}
		printf("%lu,\n ",i);

}


