/***********************************************************************************************************
 * 1-print_rev_recursion.c
 * _print_rev_recursion()-prints a string in reverse
 * @s-string input
 * return-void
 * ******************************************************************************************************/

#include "main.h"

void _print_rev_recursion(char *s)
{

	if(*s=='\0')
	{
		
	}
	if(*s!='\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
