/**********************************************************************************************************
 * print_char.c
 * print_char()-prints char when type when %c is encountered in _printf()
 * @args-char argument
 *
 * return-int counter
 * **********************************************************************************************************/

#include "main.h"

int print_char(va_list args)
{
	int count;
	char ch;

	ch=va_arg(args,int);
	count=0;

	_putchar(ch);
	count++;
	return(count);
}

