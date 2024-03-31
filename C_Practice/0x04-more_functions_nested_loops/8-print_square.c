/******************************************************************
 * 8-print_square.c
 * print_square()-prints a square made up of #
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_square(int num)
{
	int i,j;

	if (num<=0)
	{
		_putchar('\n');
	}
	
	for (i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
