/***********************************************************************************************************
 * 6-is_prime_number.c
 * _is_prime_number()-Checks if the input is a prime number or not;
 * @n- input given
 * return-0 if prime 1 if not
 * ******************************************************************************************************/

#include "main.h"

int _is_prime_number(int n)
{

	long i;

	if(n<1)
	{
		return(0);
	}
	if(n<=3)
	{
		return(1);
	}
	for(i=5;i*i<=n;i+=6)
	{
		if(n%i==0 || n%(i+2)==0)
		{
			return(1);
		}
		
	}
}
