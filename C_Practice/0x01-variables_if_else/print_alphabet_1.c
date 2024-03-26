/******************************************************************
 * print_alphabet_1.c
 * main()
 * This project prints the alphabet in lowercase using putchar.
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main()
{
	int x;
	for(x='a';x<='z';x++)
	{
		putchar(x);
			
		putchar('\n');
	}
	return(0);
}
