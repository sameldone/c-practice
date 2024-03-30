/******************************************************************
 * 5-more_numbers.c
 * more_numbers()-prints numbers from 0-14 10 times
 * Return-void
 * *****************************************************************/

#include "main.h"

void more_numbers(void)
{
	int number;
	int count=0;

	while(count<10)
	{	
 		for(number=0;number<=14;number++)
		{
			if(number>9)
			{
				_putchar(number/10+'0');
			}
			
			_putchar(number%10+'0');
			
		}
		count++;
		_putchar('\n');
	}
}
