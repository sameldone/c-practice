/******************************************************************
 * 100-times_table.c
 * print_times_table()-prints times table for n
 * Return-void
 * *****************************************************************/

#include "sameldone.h"

void print_times_table(int n)
{
	int result;
	int first;
	int second;
	int tmp;

	if(!(n>15||n<0))
	{
		for(first=0;first<=n;first++)
		{
			for(second=0;second<=n;second++)
			{
				result=first*second;


				if(second==0)
				{
					 result=0;
					 _putchar(result+'0');
				}
				else if(result<=9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result+'0');
				}
				else if(result>9&&result<100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(result/10+'0');
					_putchar(result%10+'0');
				}


				else if(result>=100)
				{
					tmp=result/10;
					_putchar(' ');
					_putchar(tmp/10+'0');
					_putchar(tmp%10+'0');
					_putchar(result%10+'0');
				}

				
			}
			_putchar('\n');
		}
	}
}
