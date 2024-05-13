/**********************************************************************************************************
 * print_p.c
 * print_p()-prints a pointer 
 *
 * return-int 
 * **********************************************************************************************************/

#include "main.h"

int print_p(va_list args)
{
	void *p;
	int i,hexa;
	unsigned long int cast;
	char *str="(nil)";

	p=va_arg(args,void *);

	if(!p)
	{
		for(i=0;str[i]!='\0';i++)
		{
			_putchar(str[i]);
			return(i);
		}
	}
	cast=(unsigned long int)p;

	_putchar('0');
	_putchar('x');
	hexa=put_hexa(cast);

	return(hexa+2);
}
