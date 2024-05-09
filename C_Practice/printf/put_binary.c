/**********************************************************************************************************
 * put_binary.c
 * put_bin()-convert integer to binary
 *
 * return- count
 * **********************************************************************************************************/

#include "main.h"

int put_bin(va_list args)
{
	int count,flag,i,a,bin;
	unsigned int num,p;

	count=0;
	flag=0;
	a=1;
	num=va_arg(args,unsigned int);

	for(i=0;i<32;i++)
	{
		p=((a<<(32-i))&num);

		if(p>>(31-1))
			flag=1;
		if(flag)
		{
			bin=p>>(31-i);
			_putchar(b+'0');
			count++;
		}
	}
	if(count==0)
	{
		count++;
		_putchar('0');
	}
	return(count);
}

