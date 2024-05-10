/**********************************************************************************************************
 * put_octal.c
 * put_octal()-prints octal values
 *
 * return-int
 * **********************************************************************************************************/

#include "main.h"

int put_octal(va_list args)
{
	int i,count=0,tmp;
	int *array;
	unsigned int num;
	
	num=va_arg(args,unsigned int);
	tmp=num;

	while((num/8)!=0)
	{
		num /= 8;
		count++;
	}
	count++;

	array=malloc(sizeof(unsigned int)*count);

	if(!array)
	{
		free(array);
		return(-1);
	}
	for(i=0;i<count;i++)
	{
		array[i]=tmp%8;
		tmp /=8;
	}
	for(i=(count-1);i>=0;i--)
	{
		_putchar(array[i]+'0');
	}
	
	free(array);

	return(count);
}

