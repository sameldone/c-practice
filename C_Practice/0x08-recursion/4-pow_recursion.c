/***********************************************************************************************************
 * 4-pow_recursion.c
 * _pow_recursion()-finds the power of a x given y
 * @x-the number we are finding its power
 * @y-the power we are using
 * return-power of x given y
 * ******************************************************************************************************/

#include "main.h"

int _pow_recursion(int x,int y)
{
	if(y<0)
	{
		return(-1);
	}
	if(y==0)
	{
		return(1);
	}
	return(x*_pow_recursion(x,y-1));
	
}
