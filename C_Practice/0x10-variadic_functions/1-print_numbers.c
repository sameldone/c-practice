/**********************************************************************************************************
 * 1-print_numbers.c
 * print_number()-prints numbers given as arguments followed by newline
 * return-void
 * **********************************************************************************************************/

#include "variadic_functions.h"

void print_numbers(const char *separator,const unsigned int n, ...)
{

	unsigned int i;
	unsigned int num=0;
	va_list args;
	va_start(args,n);
	
	i=0;

	while(i<n)
	{
		num=va_arg(args,int);

		printf("%d",num);

		if(i<n-1)
		{
			printf("%s",separator);
		}
		
		i++;

	}

	printf("\n");

	va_end(args);
}
