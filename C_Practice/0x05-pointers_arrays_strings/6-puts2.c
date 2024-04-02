/******************************************************************
 * 6-puts2.c
 * puts2()-prints a string
 * Return-void
 * *****************************************************************/

#include "main.h"

void puts2(char *str)
{
	int i;

	for(i=0;i<=_strlen(str);i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
