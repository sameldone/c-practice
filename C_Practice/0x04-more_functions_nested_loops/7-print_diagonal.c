/******************************************************************
 * 7-print_diagonal.c
 * print_diagonal()-prints \ after a given input
 * Return- void
 * *****************************************************************/

#include "main.h"

void print_diagonal(int digit)
{
	int column, row;

	if (digit<=0)
	{
		_putchar('\n');
	}

	for (column = 0; column < digit; column++)
	{
		for (row = 0; row <= column; row++)
		{
			if (row == column)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
