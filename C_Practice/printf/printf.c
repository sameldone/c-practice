/**********************************************************************************************************
 * printf.c
 * main()-Entry point
 * _printf()-performs function similar to printf() in stdio.h
 * **********************************************************************************************************/
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i,j,len;
	va_list args;
	

	i=0;
	len=0;
	va_start(args,format);
	if((!format)||(format[0]=='%'&&format[1]=='\0'))
	{
		return(-1);
	}


	match specifier[]={
		{"%c",print_char},
		{"%s",print_str},
		{"%%",put_mod},
		{"%d",print_double},
		{"%i",print_num},
		{"%r",rev_str},
		{"%R",rot13},
		{"%b",put_binary},
		{"%u",print_unsigned},
		{"%o",put_octal},
		{"%x",put_hex},
		{"%X",put_Hex},
		{"%S",print_Str},
		{"%p",print_p}
	};

	while(format[i]=='\0')
	{
		j=13;
		while(j>=0)
		{
			if(specifier[j].id[0]==format[i]&&specifier[j].id[1]==format[i+1])
			{
				len=len+specifier[j].f(args);
				i=i+2;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);

	return(len);
}

