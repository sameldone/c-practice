/******************************************************************
 * 9-strcpy.c
 * _strcpy()-copies str1 to str2
 * Return-string in destination
 * *****************************************************************/

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';

	return(dest);
}
