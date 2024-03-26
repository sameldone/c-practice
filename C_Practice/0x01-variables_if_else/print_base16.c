/******************************************************************
 * print_base16.c
 * main()-Prints the numbers of base 16 
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int number='0';
	int letter='a';

	while(number<='9')
	{
		putchar(number);
		number++;
	}
	while(letter<='f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
