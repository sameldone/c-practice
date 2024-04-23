/***********************************************************************************************************
 * 5-sqrt_recursion.c
 * _find_sqrt()-finds the square root of a number.
 * @min-minimum range
 * @root-root we are searching for
 * ******************************************************************************************************/
#include "main.h"

int _find_sqrt(int n,int root)
{
	if(n*n==root)
	{

		return(root);
	}
	if(n*n>root)
	{
		return(_find_sqrt(n,root-1));
	}
	return(_find_sqrt(n,root+1));
}
/***********************************************************************************************************
 * 5-sqrt_recursion.c
 * _sqrt_recursion()-prints the square root of n
 * @n-number we are finding the square root of
 * return-square of n
 * ******************************************************************************************************/

int _sqrt_recursion(int n)
{
	if(n<0)
	{
		return(-1);
	}
	return(_find_sqrt(n,0));
}
