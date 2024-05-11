/**********************************************************************************************************
 * print_str.c
 * print_str()-prints a string when %s is encountered in _printf 
 * @variadic function
 *
 * return-int counter
 * **********************************************************************************************************/

#include "main.h"

int print_str(va_list args)
{
	char *str;
	int i,count=0;

	str=va_arg(args,char *);
	if(!str)
	{
		str="(NULL)";
		for(i=0;str[i]!='\0';i++)
		{
			_putchar(str[i]);
			count++;
		}
	}

	for(i=0;str[i]!='\0';i++)
	{
		_putchar(str[i]);
		count++;
	}
	str='\0';

	return(count+1); }
