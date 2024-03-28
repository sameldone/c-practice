/******************************************************************
 * 5-sign.c
 * print_sign()-prints a sign for input i.e + for 1 and - for -1
 * Return-1 for positive, 0 for zero and -1 for negatives
 * *****************************************************************/

#include "sameldone.h"

int print_sign(int n)
{
	if(n>0)
	{
		_putchar('+');
		return(1);
	}
	else if(n<0)
	{
		_putchar('-');
		return(-1);
	}

	_putchar('0');


	return(0);
}
