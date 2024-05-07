/**********************************************************************************************************
 * 3-print_all.c
 * print_all()-prints it arguments based on the format given
 * @format-the format which the arguments are to be printed
 * 
 * return-void
 * **********************************************************************************************************/

#include "variadic_functions.h"
#include <string.h>

void print_all(const char * const format, ...)
{

	const char *separator;
	int i,len;
	va_list args;
	va_start(args,format);


	separator="cfis";

	i=0;
	len=strlen(format);

	while(i<len)
	{
		if(separator[i]==format[i]&&i>0)
		{
			printf(", ");

		}
		switch(format[i])
		{
			case 'c':
				printf("%c",va_arg(args,int));
				break;
			case 'f':
				printf("%f",va_arg(args,double));
				break;
			case 'i':
				printf("%d",va_arg(args,int));
				break;
			case 's':
				printf("%s",va_arg(args,char *));
				break;
		}

		i++;
	}
	printf("\n"),va_end(args);
}
