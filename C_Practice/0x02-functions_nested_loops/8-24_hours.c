/******************************************************************
 * 8-24_hours.c
 * jack_bauer()-Prints every minute of Jack Bauer track
 * Return-void
 * *****************************************************************/

#include "sameldone.h"

void jack_bauer(void)
{
	int first;
	int second;

	for(first=0;first<=23;first++)
	{
		for(second=0;second<=59;second++)
		{
			_putchar(first/10+'0');
			_putchar(first%10+'0');
			_putchar(':');
			_putchar(second/10+'0');
			_putchar(second%10+'0');
			_putchar('\n');
		}
	}
}
