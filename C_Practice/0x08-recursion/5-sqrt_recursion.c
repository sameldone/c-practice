/***********************************************************************************************************
 * 5-sqrt_recursion.c
 * _find_sqrt()-finds the square root of a number.
 * @min-minimum range
 * @root-root we are searching for
 * ******************************************************************************************************/
#include "main.h"

int _find_sqrt(int min,int max, int n)
{

	if(max>=min)
	{

/*	Find the midpoint of the range*/
		long mid=(long)min+(max-min)/2;
		if(mid*mid==n)
		{

			return(mid);
		}
		if(mid*mid>n)
		{
			return(_find_sqrt(min,mid-1,n));
		}
		if(mid*mid<n)
		{	
			return(_find_sqrt(mid+1,max,n));
		}
	}
	return(-1);

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
	if(n==0||n==1)
	{
		return(n);
	}

	return(_find_sqrt(1,n,(long)(n)));
}
