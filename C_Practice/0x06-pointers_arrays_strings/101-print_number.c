/******************************************************************
 * 101-print_number.c
 * print_number()-prints an integer
 * @n-integer input
 * return-void
 * *****************************************************************/

#include "main.h"

void print_number(int n)
{
	int out;
	if(n<0)
	{
		n=n*-1;
		_putchar('-');
	}
	if(n<10)
	{
		_putchar(n+'0');
	}
	else if(n>9&&n<100)
	{
		_putchar((n/10)+'0');
		_putchar((n%10)+'0');
	}
	else if(n>99&&n<1000)
	{
		out=n/100;
		_putchar((n/100)+'0');
		_putchar((out/10)+'0');
		_putchar((n%10)+'0');
	}
	else if(n>999)
	{
		_putchar((n/1000)+'0');
		_putchar(((n/100)%10)+'0');
		_putchar(((n/10)%10)+'0');
		_putchar((n%10)+'0');
	}
}
