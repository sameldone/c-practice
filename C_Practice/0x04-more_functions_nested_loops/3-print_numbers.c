/******************************************************************
 * 3-print_numbers.c
 * print_number()-prints numbers 0 - 9
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_numbers(void)
{
	int number;

	for(number=0;number<=9;number++)
	{
		_putchar(number+'0');
	}
	_putchar('\n');
}
