/******************************************************************
 * print_alphabet_4.c
 * main()-Prints the lowercase alphabet except 'q' and 'e'
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int letter = 'a';

	while(letter<='z')
	{
		if(letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

		letter++;
	}
	return (0);
}
