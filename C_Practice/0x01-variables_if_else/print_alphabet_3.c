/******************************************************************
 * print_alphabet_3.c
 * main()
 * This program prints the alphabet in lower and uppercase then add 
 * a new line.
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int small_letter='a';
	int capital_letter='A';
	while(small_letter<='z')
	{
		putchar(small_letter);
		small_letter++;
	}
	while(capital_letter<='Z')
	{
		putchar(capital_letter);
		capital_letter++;
	}
	putchar('\n');
	
	return(0);
}


