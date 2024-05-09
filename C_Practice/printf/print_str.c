/**********************************************************************************************************
 * print_str.c
 * print_str()-prints a string.
 *
 * return-0 on success
 * **********************************************************************************************************/
#include "main.h"

int print_str(va_list args)
{
	char *str;
	int i;

	str=va_arg(args,char *);

	if(str==NULL)
	{
		str="(null)";

		for(i=0;str[i]!='\0';i++)
		{
			_putchar(str[i]);

		}
		str='\0';
		return(_strlen(str));
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
		{
			_putchar(str[i]);
		}
		str='\0';
		return(_strlen(str));
	}
}
