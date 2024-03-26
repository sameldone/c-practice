/******************************************************************
 * print_combo_3.c
 * main()-Prints double digits combinations between 01 and 99
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int first_digit;
	int second_digit;

	for(second_digit=0;second_digit<=9;second_digit++)
	{
		for(first_digit=second_digit+1;first_digit<=9;first_digit++)
		{
			putchar(second_digit+'0');
			putchar(first_digit+'0');

			if(!(first_digit=='9'&&second_digit=='9'))
			{
				putchar(',');
			}
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

