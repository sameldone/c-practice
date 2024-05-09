/**********************************************************************************************************
 * print_num.c
 * print_num()-prints integer.
 *
 * return-1 on success
 * **********************************************************************************************************/

#include "main.h"

int print_num(va_list args)
{
	int i,num,n,last,place,digit;

	n=va_arg(args,int);
	num=n;
	last=n/10;
	place=1;
	i=1;

	if(last<0)
	{
		_putchar('-');
		num=-num;
		n=-n;
		last=-last;
		i++;
	}
	if(num>0)
	{
		while(num/10!=0)
		{
			place=place*10;
			num=num/place;
		}
		num=n;
		while(place>0)
		{
			digit=num/place;
			_putchar(digit+'0');
			num=num-(digit*place);
			place=place/10;
			i++;
		}
	}
	_putchar(last+'0');

	return(i);

}

