/******************************************************************
 * 0-strcat1.c
 * _strcat.c-concatnates two strings
 * Return-destination of the concatnated string
 * *****************************************************************/

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i=0;
	int j=0;

	while(dest[i]!='\0')
	{
		i++;
	}
	while(src[j]!='\0')
	{
		dest[i]=src[j];
		j++;
		i++;
	}
	dest[i]='\0';
	
	return(dest);
}
