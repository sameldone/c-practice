/******************************************************************
 * print_alphabet_5.c
 * main()-Prints lowercase alphabet in reverse
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int letter='z';

	while(letter>='a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
