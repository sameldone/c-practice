/******************************************************************
 * 10-print_triangle.c
 * print_triangle()-prints a triangle and a next line
 * Return- void
 * *****************************************************************/

#include "main.h"

void print_triangle(int n)
{
	int column, row, tmp;

	if (n<=0)
	{
		_putchar('\n');
	}

	for (row = 0; row < n; row++)
	{
		for (column = n-row; column > 1; column--)
		{
			_putchar('.');
		}
		for (tmp = column+row; tmp >= 1; tmp--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
