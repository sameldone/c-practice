/******************************************************************
 * 6-abs.c
 * _abs()-Returns absolute value of a given integer
 * Return-absolute value
 * *****************************************************************/

#include "sameldone.h"

int _abs(int n)
{
	if(n>=0)
	{
		return(n);
	}
	return(n*-1);
}
