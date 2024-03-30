/******************************************************************
 * 4-print_most_numbers.c
 * print_most_numbers.c()-prints numbers from 0-9 except 2 and 4
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_most_numbers(void)
{
	int number;

	for(number=0;number<=9;number++)
	{
		if(!(number==4||number==2))
		{
			_putchar(number+'0');
		}
	}
	_putchar('\n');
}
