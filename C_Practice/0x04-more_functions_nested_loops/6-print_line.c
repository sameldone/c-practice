/******************************************************************
 * 6-print_line.c
 * print_line()-prints a line of a given length
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_line(int i)
{
	while(i>0)
	{
		_putchar('_');
		i--;
	}
	_putchar('\n');
}
