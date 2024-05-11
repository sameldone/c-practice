/**********************************************************************************************************
 * put_int.c
 * put_int()-prints integer when %d is encoutered in _printf
 *@args-argument
 *
 * return-int counter
 * **********************************************************************************************************/

#include "main.h"

int put_double(va_list args)
{
	int i,num,digit,place,last,tmp,count;

	num=va_arg(args);
	tmp=num;
	last=num/10;
	place=1;
	count=0;

	if(last<0)
	{
		_putchar('-');
		num=-num;
		tmp=-tmp;
		last=-last;
		count++;
	}
	while(num!=0)
	{
		place*=10;
		num/=place;
	}
	while(place)
	{




