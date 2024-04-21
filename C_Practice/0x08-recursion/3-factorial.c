/***********************************************************************************************************
 * 3-factorial.c
 * factorial()-finds the factorial of a given number
 * @n-integer input
 * return-if n is 0(1), n less than 0 -1, otherwise factorial of a number
 * ******************************************************************************************************/

#include "main.h"

int factorial(int n)
{
	if(n<0)
	{
		return(-1);
	}
	if(n==0)
	{
		return(1);
	}
	else
	{
		return(n*factorial(n-1));
	}
}

