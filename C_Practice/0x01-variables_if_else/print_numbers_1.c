/******************************************************************
 * print_numbers_1.c
 * main()-Prints single digit numbers from 0-10 using putchar()
 * Return- Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int number='0';

	while(number<='9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return(0);
}
