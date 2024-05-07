/**********************************************************************************************************
 * 2-print_strings.c
 * print_strings()-prints string from the arguments
 * @separator-string to be printed between the strings
 * @n-number of strings passed in the function
 *
 * return-void
 *
 * **********************************************************************************************************/

#include "variadic_functions.h"

void print_strings(const char *separator,const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args,n);

	i=0;

	while(i<n)
	{
		printf("%s",va_arg(args,char*));

		if(i<n-1)
		{
			printf("%s",separator);
		}
		i++;
	}

	printf("\n");
	va_end(args);

}
