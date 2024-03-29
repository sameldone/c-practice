/******************************************************************
 * 11-print_to_98.c
 * print_to_98()-prints numbers to 98 from a given value
 * Return-void
 * *****************************************************************/

#include <stdio.h>
#include "sameldone.h"

void print_to_98(int number)
{
	if(number==98)
	{
		printf("%d\n",number);
	}
	else if(number>98)
	{
		while(number>98)
		{
			number--;
			printf("%d, ",number);

		}
		printf("\n");
		
	}
	else if(number<98)
	{
		while(number<98)
		{
			number++;
			printf("%d, ",number);


		}
		printf("\n");
	}
}
