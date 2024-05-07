/**********************************************************************************************************
 * 0-sum_them_all.c
 * sum_them_all()-prints the sum of all its arguments
 * @n-number of arguments
 * return-0 if n is 0
 * **********************************************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(int n, ...)
{
	int i;
	int total=0;
	va_list args;
	va_start (args,n);

	if(n==0)
	{
		return (0);
	}


	i = 0;

	while(i<n)
	{
		
		total+=va_arg(args,int);
		i++;
	
	}

	return(total);


}
