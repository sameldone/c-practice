/******************************************************************
 * 4-print_rev.c
 * print_rev()-prints the reverse of a string
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_rev(char *str)
{
	int i;

	for(i=_strlen(str);i>=0;i--)/*As long as i not less than zero, the decrement i*/
	{

		_putchar(*(str+i));/*print the item at the address coresponding to index i*/
	}
	_putchar('\n');
}

