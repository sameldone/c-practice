/******************************************************************
 * 9-times_table.c
 * time_table()-prints the times table to 9
 * Return-void
 * *****************************************************************/

#include "sameldone.h"

void times_table(void)
{
	int first;
	int second;
	int result;

	for(first=0;first<=9;first++)
	{
		for(second=0;second<=9;second++)
		{
			result=(first*second);

			if(second==0)
			{
				result='0'+result;
				_putchar(result);
			}
			else if(result<=9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result+'0');
			}
			else if(result>9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result/10+'0');
				_putchar(result%10+'0');
			}
		}

		_putchar('\n');
	}
}

