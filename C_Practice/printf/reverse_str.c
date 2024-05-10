/**********************************************************************************************************
 * reverse_str.c
 * rev_str()-reverses strings
 *
 * return-int
 * **********************************************************************************************************/

#include "main.h"

int rev_str(va_list args)
{
	char *str;
	int i,j,len;

	str = va_arg(args,char *);
	len=_strlen(str);

	for(i=0;str[i]!='\0';i++)
		;

	for(j=0;j<len;j++)
	{
		_putchar(str[j]);

	}
	return(len);
}
