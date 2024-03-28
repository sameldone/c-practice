/******************************************************************
 * 7-print_last_digit.c
 * print_last_digit()-prints the last digit of a given number
 * Return-last digit of a number
 * *****************************************************************/

#include "sameldone.h"

int print_last_digit(int n)
{
	if(n<0)
	{
		n*=-1;
	}

	_putchar('0'+(n%10));

	return(n%10);
}
