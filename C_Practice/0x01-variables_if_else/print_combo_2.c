/******************************************************************
 * print_combo_2.c
 * main()-Prints two digit number combo between 00 and 99
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int first_digit;
	int second_digit;

	for(first_digit='0';first_digit<='9';first_digit++)
	{
		for(second_digit='0';second_digit<='9';second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);

			if(!(second_digit=='9' && first_digit=='9'))
			{
				putchar(',');
			}
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
