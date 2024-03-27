/******************************************************************
 * print_combo_5.c
 * main()-Prints combinations of digit in fours.
 * Return-Always 0
 * *****************************************************************/

#include <stdio.h>

int main(void)
{
	int first,second,third,fourth;

	for (first='0';first<='9';first++)
	{
		for(second=first;second<='9';second++)
		{
			for(third=second;third<='9';third++)
			{
				for(fourth=third+1;fourth<='9';fourth++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(fourth);

					putchar(',');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
