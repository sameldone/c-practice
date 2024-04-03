/******************************************************************
 * 8-print_array.c
 * print_array()-prints the value of indices(n) of an array
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d",*(a+i));
		if(!(i==(n-1)))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
