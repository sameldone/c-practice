/**********************************************************************************************************
 * print_char.c
 * print_char()-prints a char
 * return-1 on success
 * **********************************************************************************************************/

#include "main.h"

int print_char(va_list args)
{
	char ch;
	
	ch = va_arg(args,int);
	_putchar(ch);
	return(1);
}
