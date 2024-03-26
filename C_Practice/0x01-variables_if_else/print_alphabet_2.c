/******************************************************************
 * print_alphabet_2.c
 * main()
 * This is program that prints the alphabet in lowercase using 
 * putchar and while loop.
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int letter='a';

	while(letter<='z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

