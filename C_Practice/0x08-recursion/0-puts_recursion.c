/***********************************************************************************************************
 * 0-puts_recursion.c
 * _puts_recursion()-prints a string followed by a new line
 * @s-string input
 * return-void
 * *************************************************************************************************/

#include "main.h"

void _puts_recursion(char *s)
{
	if(*s=='\0')
	{
		_putchar('\n');

	}
	if(*s!='\0')
	{
		_putchar(*s);

		_puts_recursion(s+1);
	}

}
