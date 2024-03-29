/******************************************************************
 * 102-fibonnaci.c
 * fibonacci()-prints fibonacci upto 100
 * Return-void
 * *****************************************************************/

#include "sameldone.h"
#include <stdio.h>

void fibonacci(void)
{
	int current=1;
	int next;
	int old=0;
	
	while(current<100)
	{
		printf("%d, ",current);

		next=current+old;
		old=current;
		current=next;

		
		
	}
}
