/******************************************************************
 * 8-print_square.c
 * print_square()-prints a square made up of #
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_square(int num)
{
	int column;
	int row;

	if (num<=0)
	{
		_putchar('\n');
	}

	for (column=0;column<=num;column++)
	{
		for(row=0;row<=column;row++)
		{
			_putchar(column+'0');
			_putchar(' ');
			_putchar(row+'0');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
