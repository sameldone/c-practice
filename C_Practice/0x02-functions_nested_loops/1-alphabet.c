/******************************************************************
 * 1-alphabet.c
 * print_alphabet()-Prints lowercase alphabet
 * Return- void
 * *****************************************************************/

#include "sameldone.h"

void print_alphabet()
{
	int letter='a';

	for(letter='a';letter<='z';letter++)
	{
		_putchar(letter);
	}
	putchar('\n');
}
