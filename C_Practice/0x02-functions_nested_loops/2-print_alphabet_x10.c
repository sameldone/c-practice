/******************************************************************
 * 2-print_alphabet_x10.c
 * print_alphabet_x10()-Prints lowercase alphabet 10 times
 * Returns-Void
 * *****************************************************************/

#include "sameldone.h"

void print_alphabet_x10()
{
	int line;
	int letter;

	for(line=0;line<=10;line++)
	{
		for(letter='a';letter<='z';letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
