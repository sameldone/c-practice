/******************************************************************
 * print_combo_7.c
 * main()-Prints a combination of four number in twos between 00 99
 * Return-Always 0
 * *****************************************************************/

#include <stdio.h>

int main(void)
{
	int first,second;

	for(first=0;first<99;first++)
	{
		for(second=0+1;second<=99;second++)
		{
			putchar(first/10+'0');
			putchar(first%10+'0');
			putchar(' ');
			putchar(second/10+'0');
			putchar(second%10+'0');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
