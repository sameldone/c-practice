/******************************************************************
 * 103-fibonacci.c
 * fibonacci_even()-prints even fibonacci numbers pto 4000000
 * Return-void
 * *****************************************************************/

#include <stdio.h>
#include "sameldone.h"

void fibonacci_even(void)
{
	int current=1;
	int next;
	int old=0;
	while(current<4000000)
	{
		next=current+old;
		old=current;
		current=next;
		if(current%2==0)
		{
			printf("%d, ",current);
		}
	}
}
