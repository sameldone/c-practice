/******************************************************************
 * print_combo.c
 * main()-Prints all combinations of single digits between 0-10 
 * followed by space and a comma.
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int digit='0';

	while(digit<='9')
	{
		putchar(digit);
		if(digit!='9')
		{

			putchar(',');
		}
		putchar(' ');
		digit++;
	}
	putchar('\n');

	return (0);
}
