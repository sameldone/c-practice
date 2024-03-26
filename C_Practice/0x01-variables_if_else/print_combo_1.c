/******************************************************************
 * print_combo_1.c
 * main()-Prints combinations of two digit number from 01 to 99 
 * followed by space and comma.
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int first_digit='0';
	int second_digit='0';

	while(first_digit<='9')
	{

		while(second_digit<='9')
		{
			putchar(first_digit);
			putchar(second_digit);

			if(!(first_digit=='9' && second_digit == '9'))
			{
				putchar(',');
			}
			putchar(' ');
			first_digit++;
			second_digit++;
		}
	}

	putchar('\n');

	return (0);
}
