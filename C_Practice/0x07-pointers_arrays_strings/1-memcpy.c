/******************************************************************
 * 1-memcpy.c
 * _memcpy()-copies memory from source to destination
 * @dest-destination being copied to
 * @src-source of the memory
 * @n-amount being copied
 * return-destination pointer
 * *****************************************************************/

#include "main.h"

char *_memcpy(char *dest,char *src,unsigned int n)
{
	unsigned int i;

	for(i=0;i<n;i++)
	{
		*(dest+i)=*(src+i);
	}
	return(dest);
}
