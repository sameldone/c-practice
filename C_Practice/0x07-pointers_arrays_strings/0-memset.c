/******************************************************************
 * 0-memset.c
 * _memset()-fills memory with constant byte.
 * @s-pointer to the memory location we're to fill
 * @b-size of the memory we're filling
 * @n-number of memories we are filling
 * return-char of memory filled
 * *****************************************************************/

#include "main.h"

char *_memset(char *s,int b, unsigned int n)
{
	int i;

	for(i=0;i<b;i++)
	{
		*(s+i)=n;
	}
	return(s);
}
