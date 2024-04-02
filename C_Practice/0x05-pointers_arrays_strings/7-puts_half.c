/******************************************************************
 * 7-puts_half.c
 * puts_half()-prints half of a string followed by a newline
 * Return-void
 * *****************************************************************/

#include "main.h"

void puts_half(char *str)
{
	int i;

	for(i=0;i<=_strlen(str);i++)
	{
		if(i>=(_strlen(str)/2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
