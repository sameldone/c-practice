/******************************************************************
 * 104-fibonacci.c
 * fibonacci_98()-prints first fibonacci sequence upto 98
 * Return-void
 * *****************************************************************/

#include "sameldone.h"
#include <stdio.h>

void fibonacci_98(void)
{
	int current=1;
	int next;
	int old=0;

	while(current<98)
	{
		next=current+old;
		old=current;
		current=next;
		if(current<98)
		{
			printf("%d, ",current);
		}
	}
	_putchar('\n');
}
