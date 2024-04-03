/******************************************************************
 * 9-strcpy.c
 * _strcpy()-copies str1 to str2
 * Return-void
 * *****************************************************************/

#include "main.h"

char* _strcpy(char *dest, char *src)
{
	int i;

	for(i=0;i!='\0';i++)
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	return(src);
}

