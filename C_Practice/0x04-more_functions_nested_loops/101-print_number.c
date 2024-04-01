/******************************************************************
 * 101-print_number.c
 * print_number()-prints integer
 * Return-void
 * *****************************************************************/

#include "main.h"

void print_number(int n)
{
	int tmp,tmp1;

	if (n<0)
	{
		n=n*-1;

		if(n<9)
		{

			_putchar('-');
			_putchar(n+'0');
		}
		else if(n>9&&n<100)
		{
			_putchar('-');
			_putchar(n/10+'0');
			_putchar(n%10+'0');
		}
		else if(n>99&&n<1000)
		{
			tmp=n/10;
			
			_putchar('-');
			_putchar(n/100+'0');
			_putchar(tmp%10+'0');
			_putchar(n%100+'0');
		}
		else if(n>1000)
		{
	
			tmp1=n/10;
			tmp=n/100;

			_putchar('-');
			_putchar(n/1000+'0');
			_putchar(tmp%10+'0');
			_putchar(tmp1%100+'0');
			_putchar(n%1000+'0');
		}
	}

	else if(n<9)
	{
		_putchar(n+'0');
	}
	else if(n>9&&n<100)
	{
		_putchar(n/10+'0');
		_putchar(n%10+'0');
	}
	else if(n>99&&n<1000)
	{
		tmp=n/10;
		_putchar(n/100+'0');
		_putchar(tmp%10+'0');
		_putchar(n%100+'0');
	}
	else if(n>1000)
	{

		tmp1=n/10;
		tmp=n/100;
		_putchar(n/1000+'0');
		_putchar(tmp%10+'0');
		_putchar(tmp1%100+'0');
		_putchar((n%1000)%10+'0');
	}
	
	
	_putchar('\n');
}	
