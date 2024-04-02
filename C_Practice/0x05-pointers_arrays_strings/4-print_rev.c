/******************************************************************
 * 4-print_rev.c
 * print_rev()-prints the reverse of a string
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_rev(char *str)
{
	int i;

	for(i=_strlen(str);i>=0;i--)
	{

		_putchar(str[i]);
	}
	_putchar('\n');
}

