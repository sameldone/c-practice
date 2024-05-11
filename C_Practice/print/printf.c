/**********************************************************************************************************
 * printf.c
 * _printf()-prints things similar to the printf function in stdio.h
 * @forma-string format
 * @variadic functions
 *
 * return-int counter
 * **********************************************************************************************************/

#include "main.h"

int _printf(const char *format, ...)
{

	match specifier[]=
	{
		{"%c",print_char},
		{"%s",print_str},
		{"%%",print_mod}
	};
	int i,j,count;
	va_list args;

	va_start(args,format);

	i=0;
	count=0;
	
	while(format[i]=='\0')
	{
		j=2;

		while(j>=0)
		{
			if(specifier[j].id[0]==format[i]&&specifier[j].id[1]==format[i+1])
			{
				count=count+specifier[j].f(args);
				i=i+2;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);

	return(count);
}


