/******************************************************************
 * print_numbers.c
 * main()-Prints all single digit numbers from 0-10
 * Return-Always 0
 * *****************************************************************/
#include <stdio.h>

int main(void)
{
	int number=0;

	while(number<10)
	{
		printf("%d",number);
		number++;
	}

	putchar('\n');
	return (0);
}
